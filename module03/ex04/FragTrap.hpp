#ifndef FRAGTRAP_H
#define FRAGTRAP_H

// #include <iostream>
// #include <string>
// #include <iomanip>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	private:
		std::string	_attack_random[5];

	public:
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(const FragTrap &copy_fragtrap);
		~FragTrap();

		FragTrap &operator=(const FragTrap &assign_fragtrap);

		void	vaulthunter_dot_exe(std::string const &target);
		void	set_hit_points(unsigned i = 100);
		void	set_max_hit_points(unsigned i = 100);
		void	set_ranged_attack_damage(unsigned i = 20);
		void	set_armor_damage_reduction(unsigned i = 5);
		void	set_level(unsigned i = 1);


};

#endif