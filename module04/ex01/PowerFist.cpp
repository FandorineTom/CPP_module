#include "PowerFist.hpp"

PowerFist::PowerFist() {
	setName();
	setAttackSound();
	setAPcost();
	setDamage();
}

PowerFist::PowerFist(std::string const &name, int apcost, int damage) : 
					AWeapon(name, apcost, damage) {
	setAttackSound();
}

PowerFist::PowerFist(const PowerFist &copy_powerfist) {
	*this = copy_powerfist;
}

PowerFist &PowerFist::operator=(const PowerFist &assign_powerfist) {
	_name = assign_powerfist._name;
	_apcost = assign_powerfist._apcost;
	_damage = assign_powerfist._damage;
	return (*this);
}

PowerFist::~PowerFist() {}

void	PowerFist::setName(std::string name) {_name = name;}
void	PowerFist::setAttackSound(std::string sound) {_attack_sound = sound;}
void	PowerFist::setAPcost(int apcost) {_apcost = apcost;}
void	PowerFist::setDamage(int damage) {_damage = damage;}

void	PowerFist::attack() const {std::cout << _attack_sound << std::endl;}