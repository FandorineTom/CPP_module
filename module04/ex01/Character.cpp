#include "Character.hpp"

Character::Character() : _name("NOBODY"), _ap(40), _weapon(NULL) {}

Character:: Character(std::string const &name) : _name(name), _ap(40), _weapon(NULL) {}

Character::Character(const Character &copy_character) {*this = copy_character;}

Character &Character::operator=(const Character &assign_character) {
	_name = assign_character._name;
	_ap = assign_character._ap;
	_weapon = assign_character._weapon;
	return *this;
}

std::string Character::getName() const {return _name;}
int			Character::getAP() const {return _ap;}
AWeapon		*Character::getWeapon() const {return _weapon;}

void		Character::recoverAP() {
	_ap = (_ap + 10 > 40) ? 40 : (_ap + 10);
}

void		Character::equip(AWeapon *weapon) {_weapon = weapon;}

void		Character::attack(Enemy *enemy) {
	if (_weapon) {
		if (_ap < _weapon->getAPcost())
			std::cout << "Need to recover some action points first\n";
		else {
			if (enemy->getHP() == 0)
				return ;
			std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			enemy->takeDamage(_weapon->getDamage());
			if (!enemy->getHP())
				enemy->~Enemy();
			_ap -= _weapon->getAPcost();
		}
	}
}

Character::~Character() {}

std::ostream &operator<<(std::ostream &s, const Character &character) {
	s << character.getName() << " has " << character.getAP() << " AP and ";
	if (character.getWeapon())
		s << "wields a " << character.getWeapon()->getName() << std::endl;
	else
		s << "is unarmed\n";
	return s;
}