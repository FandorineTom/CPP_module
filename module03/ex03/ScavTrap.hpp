#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		std::string	_attack_random[5];

	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(const ScavTrap &copy_scavtrap);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &assign_scavtrap);

		void	challengeNewcomer(std::string const &target);

};

#endif