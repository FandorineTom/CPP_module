#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
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

		void	set_energy_points(unsigned i = 120);
		void	set_max_energy_points(unsigned i = 120);
		void	set_melee_attack_damage(unsigned i = 60);


};

#endif