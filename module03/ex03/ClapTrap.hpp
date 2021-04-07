#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap {
	protected:
		unsigned	_hit_points;
		unsigned	_max_hit_points;
		unsigned	_energy_points;
		unsigned	_max_energy_points;
		unsigned	_level;
		std::string	_name;
		unsigned	_melee_attack_damage;
		unsigned	_ranged_attack_damage;
		unsigned	_armor_damage_reduction;
		std::string	_range_message;
		std::string	_melee_message;
		std::string _not_enough_points;
		std::string _taking_damage_message;
		std::string _armor_message;
		std::string _being_revived_message;

	public:
		ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(const ClapTrap &copy_claptrap);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &assign_claptrap);

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif