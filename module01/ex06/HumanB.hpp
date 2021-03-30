#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		HumanB(std::string name);

		void	attack() const;
		void	setWeapon(Weapon &weapon);

		~HumanB();

	private:
		const Weapon	*_w_type;
		std::string		_name;
};
#endif