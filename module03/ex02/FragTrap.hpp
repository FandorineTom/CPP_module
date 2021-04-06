#ifndef FRAGTRAP_H
#define FRAGTRAP_H

// #include <iostream>
// #include <string>
// #include <iomanip>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		std::string	_attack_random[5];

	public:
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(const FragTrap &copy_fragtrap);
		~FragTrap();

		FragTrap &operator=(const FragTrap &assign_fragtrap);

		void	vaulthunter_dot_exe(std::string const &target);
};

#endif