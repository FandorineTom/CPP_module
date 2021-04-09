#include "RadScorpion.hpp"

RadScorpion::RadScorpion() {
	setHP();
	setType();
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion &copy_scorpion) {
	*this = copy_scorpion;
	std::cout << "* click click click *\n";
}

RadScorpion &RadScorpion::operator=(const RadScorpion &assign_scorpion) {
	_hp = assign_scorpion._hp;
	_type = assign_scorpion._type;
	return (*this);
}

void		RadScorpion::setHP(int hp) {_hp = hp;}
void		RadScorpion::setType(std::string type) {_type = type;}

void		RadScorpion::takeDamage(int damage) {
	if (_hp && damage > 0) {
		_hp -= (_hp > (damage)) ? (damage) : _hp;
 		// if (!_hp)
		// 	RadScorpion::~RadScorpion();
	}
}

RadScorpion::~RadScorpion() {std::cout << "* SPROTCH *\n";}