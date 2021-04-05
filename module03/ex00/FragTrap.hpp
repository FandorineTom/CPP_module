#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>

class FragTrap {
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
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(const FragTrap &copy_fragtrap);
		~FragTrap();

		FragTrap &operator=(const FragTrap &assign_fragtrap);

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);

};

#endif