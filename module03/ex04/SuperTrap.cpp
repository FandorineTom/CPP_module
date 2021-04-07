#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap() {
	FragTrap::set_hit_points();
	FragTrap::set_max_hit_points();
	NinjaTrap::set_energy_points();
	NinjaTrap::set_max_energy_points();
	FragTrap::set_level();
	NinjaTrap::set_melee_attack_damage();
	FragTrap::set_ranged_attack_damage();
	FragTrap::set_armor_damage_reduction();
	_name = "Nobody";
	std::cout << "I am born! " << "SuperTrap with no name created\n";
}

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	FragTrap::set_hit_points();
	FragTrap::set_max_hit_points();
	NinjaTrap::set_energy_points();
	NinjaTrap::set_max_energy_points();
	FragTrap::set_level();
	NinjaTrap::set_melee_attack_damage();
	FragTrap::set_ranged_attack_damage();
	FragTrap::set_armor_damage_reduction();
	_name = name;
	std::cout << "I am born! " << "SuperTrap with name " << _name << " created\n";
}

SuperTrap::SuperTrap(const SuperTrap &copy_SuperTrap) {
	*this = copy_SuperTrap;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &assign_SuperTrap) {
	_name = assign_SuperTrap._name;
	_hit_points = assign_SuperTrap._hit_points;
	_max_hit_points = assign_SuperTrap._max_hit_points;
	_energy_points = assign_SuperTrap._energy_points;
	_max_energy_points = assign_SuperTrap._max_energy_points;
	_level = assign_SuperTrap._level;
	_melee_attack_damage = assign_SuperTrap._melee_attack_damage;
	_ranged_attack_damage = assign_SuperTrap._ranged_attack_damage;
	_armor_damage_reduction = assign_SuperTrap._armor_damage_reduction;
	return (*this);
}

SuperTrap::~SuperTrap() {
	std::cout << "I'll get you next time! " << "SuperTrap " << _name << " destroyrd\n";
}