#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		HumanB(std::string name, Weapon &type);

		void	attack() const;

		~HumanB();

	private:
		const Weapon	&_w_type;
		std::string		_name;
};
#endif