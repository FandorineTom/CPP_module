#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &type) : _w_type (type) {
	_name = name;
}

void	HumanB::attack() const {
	std::cout << _name << " attacks with his " << _w_type.getType() << std::endl;
}

HumanB::~HumanB(){
}