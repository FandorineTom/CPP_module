#include "MateriaSource.hpp"
#include "Amateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n\t\t-------CHARACTER CREATION---------\n";
	ICharacter *jim = new Character("JIM");
	std::cout << "\033[0;33mCharacter with name " << jim->getName() << " is born\033[0;0m\n";
	ICharacter *jack = new Character("JACK");
	std::cout << "\033[0;33mCharacter with name " << jack->getName() << " is born\033[0;0m\n";
	std::cout << "\t\t-------MATERIA CREATION---------\n";

	AMateria	*ice = new Ice();
	std::cout << "\033[0;36mMateria ice created as a pointer to base class\033[0;0m\n";
	Cure		*cure = new Cure();
	std::cout << "\033[0;36mMateria cure created as a pointer to child class\033[0;0m\n";

	IMateriaSource *s = new MateriaSource();
	AMateria *m;
	m = s->createMateria("ice");
	if (m)
		std::cout << "\033[0;32mType of new materia is " << m->getType() << "\033[0;0m\n";
	else
		std::cout << "\033[0;31mMateria creation failed because the source is empty\033[0;0m\n";
	s->learnMateria(ice);
	s->learnMateria(cure);
	std::cout << "\033[0;33mLearned ice and cure materias\033[0;0m\n";
	m = s->createMateria("ice");
	if (m)
		std::cout << "\033[0;32mType of new materia is " << m->getType() << "\033[0;0m\n";
	else
		std::cout << "\033[0;31mMateria creation failed because the source is empty\033[0;0m\n";
	m = s->createMateria("cure");
	if (m)
		std::cout << "\033[0;32mType of new materia is " << m->getType() << "\033[0;0m\n";
	else
		std::cout << "\033[0;31mMateria creation failed because the source is empty\033[0;0m\n";
	std::cout << "\t\t--------WRONG MATERIA--------\n";
	std::cout << "\033[0;33mTrying to create a materia that doen't exist\033[0;0m\n";
	m = s->createMateria("more");
	if (m)
		std::cout << "\033[0;32mType of new materia is " << m->getType() << "\033[0;0m\n";
	else
		std::cout << "\033[0;31mMateria creation failed because the source is empty\033[0;0m\n";
	std::cout << "\t\t-------USE---------\n";
	jim->equip(ice);
	jim->equip(cure);
	std::cout << "\033[0;35mTHe ICE XP now is " << ice->getXP() << "\033[0;0m\n";
	jim->use(0, *jack);
	std::cout << "\033[0;35mTHe ICE XP now is " << ice->getXP() << "\033[0;0m\n";
	jim->use(0, *jack);
	std::cout << "\033[0;35mTHe ICE XP now is " << ice->getXP() << "\033[0;0m\n";
	std::cout << "\033[0;36mTHe CURE XP now is " << cure->getXP() << "\033[0;0m\n";
	jim->use(1, *jack);
	std::cout << "\033[0;36mTHe CURE XP now is " << cure->getXP() << "\033[0;0m\n";
	jim->use(2, *jack);
	std::cout << "\033[0;36mTHe CURE XP now is " << cure->getXP() << "\033[0;0m\n";
	jim->use(5, *jack);
	std::cout << "\033[0;36mTHe CURE XP now is " << cure->getXP() << "\033[0;0m\n";

	std::cout << "\t\t-------UNEQUIP---------\n";
	jim->unequip(0);
	std::cout << "\033[0;35mTHe ICE XP after uneqip is " << ice->getXP() << "\033[0;0m\n";
	jim->equip(ice);
	jim->use(0, *jack);
	
	std::cout << "\t\t-------CLONE---------\n";
	AMateria *ice2 = ice->clone();
	std::cout << "\033[0;35mTHe clone ICE XP now is " << ice2->getXP() << "\033[0;0m\n";
	jim->equip(ice2);
	jim->use(2, *jack);
	std::cout << "\033[0;35mTHe clone ICE XP now is " << ice2->getXP() << "\033[0;0m\n";
	AMateria *cure2 = cure->clone();
	std::cout << "\033[0;36mTHe clone CURE XP now is " << cure2->getXP() << "\033[0;0m\n";
	jim->equip(cure2);
	jim->use(3, *jack);
	std::cout << "\033[0;36mTHe clone CURE XP now is " << cure2->getXP() << "\033[0;0m\n";

	
	std::cout << "\t\t--------COPY--------\n";
	ICharacter *copy = jim;
	copy->use(1, *jack);
	std::cout << "\033[0;36mTHe CURE XP now is " << cure->getXP() << "\033[0;0m\n";

	std::cout << "\t\t--------OPERATOR=--------\n";
	ICharacter *assign(jim);
	assign->use(1, *jack);
	std::cout << "\033[0;36mTHe CURE XP now is " << cure->getXP() << "\033[0;0m\n";

	delete bob;
	delete jim;
	delete jack;
	delete s;
	delete me;
	delete src;
	return 0;
}