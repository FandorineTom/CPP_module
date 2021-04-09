#include "CrossBow.hpp"

CrossBow::CrossBow() {
	setName();
	setAttackSound();
	setAPcost();
	setDamage();
}

CrossBow::CrossBow(std::string const &name, int apcost, int damage) : 
					AWeapon(name, apcost, damage) {
	setAttackSound();
}

CrossBow::CrossBow(const CrossBow &copy_powerfist) {
	*this = copy_powerfist;
}

CrossBow &CrossBow::operator=(const CrossBow &assign_powerfist) {
	_name = assign_powerfist._name;
	_apcost = assign_powerfist._apcost;
	_damage = assign_powerfist._damage;
	return (*this);
}

CrossBow::~CrossBow() {}

void	CrossBow::setName(std::string name) {_name = name;}
void	CrossBow::setAttackSound(std::string sound) {_attack_sound = sound;}
void	CrossBow::setAPcost(int apcost) {_apcost = apcost;}
void	CrossBow::setDamage(int damage) {_damage = damage;}

void	CrossBow::attack() const {std::cout << _attack_sound << std::endl;}