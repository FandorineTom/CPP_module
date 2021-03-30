#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _w_type (type) {
	_name = name;
}

void	HumanA::attack() const {
	std::cout << _name << " attacks with his " << _w_type.getType() << std::endl;
}

HumanA::~HumanA(){
}