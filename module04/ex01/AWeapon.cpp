#include "AWeapon.hpp"

AWeapon::AWeapon() : _name("NO WEAPON"), _apcost(0), _damage(0) {}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : 
					_name(name), _apcost(apcost), _damage(damage) {}

AWeapon::AWeapon(const AWeapon &copy_aweapon) {
	*this = copy_aweapon;
}

AWeapon &AWeapon::operator=(const AWeapon &assign_aweapon) {
	_name = assign_aweapon._name;
	_apcost = assign_aweapon._apcost;
	_damage = assign_aweapon._damage;
	return (*this);
}

std::string	AWeapon::getName() const {return (_name);}
int			AWeapon::getAPcost() const {return (_apcost);}
int			AWeapon::getDamage() const {return (_damage);}

AWeapon::~AWeapon() {}