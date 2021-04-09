#include "Character.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "CrossBow.hpp"
#include "Demagorgan.hpp"


int main()
{
	std::cout << "\t\t---------------\n";
	Character* me = new Character("SHEPARD");
	std::cout << *me;
	std::cout << "\033[0;32mcharacter created\033[0;0m\n";
	std::cout << "\t\t---------------\n";
	Enemy* b = new RadScorpion();
	std::cout << "\033[0;31menemy rad scorpion created\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	AWeapon* pr = new PlasmaRifle();
	std::cout << "\tPlasma rifle has " << pr->getDamage() << " damage points\n";
	std::cout << "\033[0;33mweapon plasma rifle created\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	AWeapon* pf = new PowerFist();
	std::cout << "\tPlower Fist has " << pf->getDamage() << " damage points\n";
	std::cout << "\033[0;33mweapon power fist created\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->equip(pr);
	std::cout << *me;
	std::cout << "\033[0;32mcharacter equipped with the plasma rifle\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->attack(b);
	std::cout << *me;
	std::cout << "\033[0;31mcharacter attacks enemy with the plasma rifle\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->equip(pf);
	std::cout << *me;
	std::cout << "\033[0;32mcharacter equipped with the power fist\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->attack(b);
	std::cout << *me;
	std::cout << "\033[0;31mcharacter attacks enemy with the plasma rifle\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->attack(b);
	std::cout << *me;
	std::cout << "\t" << b->getType() << " has " << b->getHP() << " hp points left\n";
	std::cout << "\033[0;31mcharacter attacks enemy with the plasma rifle\033[0;0m\n";
	std::cout << "\033[0;34mRadScorpion dies\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	Enemy *c = new SuperMutant();
	std::cout << "\t" << c->getType() << " has " << c->getHP() << " hp points left\n";
	std::cout << "\033[0;31menemy SuperMutant created\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	AWeapon *cb = new CrossBow();
	std::cout << "\tCrossbow has " << cb->getDamage() << " damage points\n";
	std::cout << "\033[0;33mweapon Crossbow created\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->equip(cb);
	std::cout << *me;
	std::cout << "\033[0;32mcharacter equipped with the Crossbow\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->attack(c);
	std::cout << *me;
	std::cout << "\t" << c->getType() << " has " << c->getHP() << " hp points left\n";
	std::cout << "\033[0;31mcharacter attacks enemy with the Crossbow\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->attack(c);
	std::cout << *me;
	std::cout << "\033[0;36mCharacter needs more action points!\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	std::cout << "\033[0;36mCharacter recovered max action points!\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	Enemy *d = new Demagorgan();
	std::cout << "\033[0;31menemy SuperMutant created\033[0;0m\n";

	std::cout << "\t\t---------------\n";
	me->equip(pf);
	me->attack(d);
	me->equip(pr);
	me->attack(d);
	me->equip(cb);
	me->attack(d);
	std::cout << "\t" << d->getType() << " has " << d->getHP() << " hp points left\n";

	me->attack(b);
	me->attack(d);
	std::cout << "\t\t---------------\n";
	std::cout << "\t\tDONE_DONE_DONE_DONE\n";
	delete me;
	delete pf;
	delete pr;
	delete c;
	delete d;
	return 0;
}