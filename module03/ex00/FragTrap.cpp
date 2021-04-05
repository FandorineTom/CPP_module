#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	_name = "nobody";
	std::cout << "Fragtrap with no name created\n";
}

FragTrap::FragTrap(std::string const &name) {
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	_name = name;
	std::cout << "Fragtrap with name " << _name << " created\n";
}

FragTrap::FragTrap(const FragTrap &copy_fragtrap) {
	*this = copy_fragtrap;
}

FragTrap &FragTrap::operator=(const FragTrap &assign_fragtrap) {
	_name = assign_fragtrap._name;
	_hit_points = assign_fragtrap._hit_points;
	_max_hit_points = assign_fragtrap._max_hit_points;
	_energy_points = assign_fragtrap._energy_points;
	_max_energy_points = assign_fragtrap._max_energy_points;
	_level = assign_fragtrap._level;
	_melee_attack_damage = assign_fragtrap._melee_attack_damage;
	_ranged_attack_damage = assign_fragtrap._ranged_attack_damage;
	_armor_damage_reduction = assign_fragtrap._armor_damage_reduction;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destroyrd\n";
}