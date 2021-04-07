#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	_name = "Nobody";
	_range_message = "Don't bother with plastic surgery - there's NO fixing that! ";
	_melee_message = "This is why you do your homework! ";
	_not_enough_points = "My assets... frozen! ";
	_taking_damage_message = "Why do I even feel pain?! ";
	_armor_message = "Armor soak increased! ";
	_being_revived_message = "Can I just say... yeehaw. ";
	std::string attacks[5] = { "Care to have a friendly duel? ",
								"I will prove to you my robotic superiority! ",
								"It's about to get magical! ",
								"Man versus machine! Very tiny streamlined machine! ",
								"Dance battle! Or, you know... regular battle. "};
	for (int i = 0; i < 5; i++) {
		_attack_random[i] = attacks[i];
	}
	std::cout << "Let's get this party started! " << "ScavTrap with no name created\n";
}

ScavTrap::ScavTrap(std::string const &name) {
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	_name = name;
	_range_message = "Don't bother with plastic surgery - there's NO fixing that! ";
	_melee_message = "This is why you do your homework! ";
	_not_enough_points = "My assets... frozen! ";
	_taking_damage_message = "Why do I even feel pain?! ";
	_armor_message = "Armor soak increased! ";
	_being_revived_message = "Can I just say... yeehaw. ";
	std::string attacks[5] = { "Care to have a friendly duel? ",
								"I will prove to you my robotic superiority! ",
								"It's about to get magical! ",
								"Man versus machine! Very tiny streamlined machine! ",
								"Dance battle! Or, you know... regular battle. "};
	for (int i = 0; i < 5; i++) {
		_attack_random[i] = attacks[i];
	}
	std::cout << "Let's get this party started! " << "ScavTrap with name " << _name << " created\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy_ScavTrap) {
	*this = copy_ScavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign_ScavTrap) {
	_name = assign_ScavTrap._name;
	_hit_points = assign_ScavTrap._hit_points;
	_max_hit_points = assign_ScavTrap._max_hit_points;
	_energy_points = assign_ScavTrap._energy_points;
	_max_energy_points = assign_ScavTrap._max_energy_points;
	_level = assign_ScavTrap._level;
	_melee_attack_damage = assign_ScavTrap._melee_attack_damage;
	_ranged_attack_damage = assign_ScavTrap._ranged_attack_damage;
	_armor_damage_reduction = assign_ScavTrap._armor_damage_reduction;
	_range_message = assign_ScavTrap._range_message;
	_melee_message = assign_ScavTrap._melee_message;
	_not_enough_points = assign_ScavTrap._not_enough_points;
	_taking_damage_message = assign_ScavTrap._taking_damage_message;
	_armor_message = assign_ScavTrap._armor_message;
	_being_revived_message = assign_ScavTrap._being_revived_message;
	for (int i = 0; i < 5; i++) {
		_attack_random[i] = assign_ScavTrap._attack_random[i];
	}
	return (*this);
}

void	ScavTrap::challengeNewcomer(std::string const &target) {
	if (_energy_points >= 25) {
		std::cout << std::setiosflags(std::ios::left) << std::setw(33) << "\033[0;35mENERGY ATTACK!\033[0;0m" << std::resetiosflags(std::ios::left);
		std::cout << _attack_random[rand() % 5] << _name << " attacks " << target << std::endl;
		_energy_points -= 25;
	}
	else {
		std::cout << std::setiosflags(std::ios::left) << std::setw(33) << "\033[1;34mOH NO!\033[0;0m" << std::resetiosflags(std::ios::left);
		std::cout << "Where'd all my bullets go? " << _name << " needs to revive some energy points\n";
	}
}

ScavTrap::~ScavTrap() {
	std::cout << "You got me! " << "ScavTrap " << _name << " destroyrd\n";
}