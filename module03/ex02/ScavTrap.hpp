#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include <iomanip>

class ScavTrap {
	private:
		unsigned	_hit_points;
		unsigned	_max_hit_points;
		unsigned	_energy_points;
		unsigned	_max_energy_points;
		unsigned	_level;
		std::string	_name;
		unsigned	_melee_attack_damage;
		unsigned	_ranged_attack_damage;
		unsigned	_armor_damage_reduction;
		std::string	_attack_random[5];

	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(const ScavTrap &copy_scavtrap);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &assign_scavtrap);

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const &target);

};

#endif