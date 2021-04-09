#pragma once

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
	protected:
		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;

		Character();

	public:
		Character(std::string const &name);
		Character(const Character &copy_character);
		Character &operator=(const Character &assign_character);
		~Character();

		std::string	getName() const;
		int			getAP() const;
		AWeapon		*getWeapon() const;

		void		attack(Enemy *enemy);
		void		recoverAP();
		void		equip(AWeapon *weapon);
};

std::ostream &operator<<(std::ostream &s, const Character &character);