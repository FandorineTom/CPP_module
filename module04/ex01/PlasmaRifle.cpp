#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() {
	setName();
	setAttackSound();
	setAPcost();
	setDamage();
}

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : 
					AWeapon(name, apcost, damage) {
	setAttackSound();
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy_plasmarifle) {
	*this = copy_plasmarifle;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &assign_plasmarifle) {
	_name = assign_plasmarifle._name;
	_apcost = assign_plasmarifle._apcost;
	_damage = assign_plasmarifle._damage;
	return (*this);
}

PlasmaRifle::~PlasmaRifle() {}

void	PlasmaRifle::setName(std::string name) {_name = name;}
void	PlasmaRifle::setAttackSound(std::string sound) {_attack_sound = sound;}
void	PlasmaRifle::setAPcost(int apcost) {_apcost = apcost;}
void	PlasmaRifle::setDamage(int damage) {_damage = damage;}

void	PlasmaRifle::attack() const {std::cout << _attack_sound << std::endl;}