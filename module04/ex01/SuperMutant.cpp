#include "SuperMutant.hpp"

SuperMutant::SuperMutant() {
	setHP();
	setType();
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(const SuperMutant &copy_supermutant) {
	*this = copy_supermutant;
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant &SuperMutant::operator=(const SuperMutant &assign_supermutsnt) {
	_hp = assign_supermutsnt._hp;
	_type = assign_supermutsnt._type;
	return (*this);
}

void		SuperMutant::setHP(int hp) {_hp = hp;}
void		SuperMutant::setType(std::string type) {_type = type;}

void		SuperMutant::takeDamage(int damage) {
	if (_hp && damage > 0) {
		_hp -= (_hp > (damage - 3)) ? (damage - 3) : _hp;
		// if (!_hp)
		// 	SuperMutant::~SuperMutant();
	}
}

SuperMutant::~SuperMutant() {std::cout << "Aaargh...\n";}