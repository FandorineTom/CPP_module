#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA();
		HumanA(std::string name, Weapon &type);
		
		void	attack() const;

		~HumanA();

	private:
		const Weapon	&_w_type;
		std::string		_name;
};
#endif