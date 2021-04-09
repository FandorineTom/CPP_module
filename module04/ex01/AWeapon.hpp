#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>
#include <string>

class AWeapon {
	protected:
		std::string _name;
		int			_apcost;
		int			_damage;
		std::string	_attack_sound;
		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &copy_aweapon);
		AWeapon &operator=(const AWeapon &assign_aweapon);

	public:
		virtual ~AWeapon();

		std::string 	getName() const;
		int				getAPcost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
};

#endif