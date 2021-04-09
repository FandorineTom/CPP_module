#include "Demagorgan.hpp"

Demagorgan::Demagorgan() {
	setHP();
	setType();
	std::cout << "* click click click *\n";
}

Demagorgan::Demagorgan(const Demagorgan &copy_enemy) {
	*this = copy_enemy;
	std::cout << "* click click click *\n";
}

Demagorgan &Demagorgan::operator=(const Demagorgan &assign_enemy) {
	_hp = assign_enemy._hp;
	_type = assign_enemy._type;
	return (*this);
}

void		Demagorgan::setHP(int hp) {_hp = hp;}
void		Demagorgan::setType(std::string type) {_type = type;}

void		Demagorgan::takeDamage(int damage) {
	if (_hp && damage > 0) {
		_hp -= (_hp > (damage)) ? (damage) : _hp;
	}
}

Demagorgan::~Demagorgan() {std::cout << "* WRAAAAAAH... *\n";}