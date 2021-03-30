#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
	_w_type = NULL;
}

void	HumanB::setWeapon(Weapon &weapon) {
	_w_type = &weapon;
}

void	HumanB::attack() const {
	std::cout << _name << " attacks with his " << _w_type->getType() << std::endl;
}

HumanB::~HumanB(){
}