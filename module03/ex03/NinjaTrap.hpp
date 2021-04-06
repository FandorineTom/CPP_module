#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
	private:
		std::string	_attack_random[5];

	public:
		NinjaTrap();
		NinjaTrap(std::string const &name);
		NinjaTrap(const NinjaTrap &copy_scavtrap);
		~NinjaTrap();

		NinjaTrap &operator=(const NinjaTrap &assign_scavtrap);

		void	ninjaShoebox(ClapTrap &claptrap, std::string const &target);
		void	ninjaShoebox(FragTrap &claptrap, std::string const &target);
		void	ninjaShoebox(ScavTrap &claptrap, std::string const &target);
		void	ninjaShoebox(NinjaTrap &claptrap, std::string const &target);

};

#endif