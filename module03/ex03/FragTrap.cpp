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
	_name = "Nobody";
	_range_message = "Coffee? Black... like my soul. FR4G-TP ";
	_melee_message = "Meet professor punch! FR4G-TP ";
	_not_enough_points = "What is that smell? Oh, never mind... it's just you! ";
	_taking_damage_message = "I'm too pretty to die! ";
	_armor_message = "Ladies looove a tough guy! ";
	_being_revived_message = "Holy crap, that worked? ";
	std::string attacks[5] = { "Get ready for some Fragtrap face time! ",
								"I'm a tornado of death and bullets! ",
								"Take two bullets, then call me in the morning. ",
								"Ready for the PUNCHline?! ",
								"I am Fire, I am Death! "};
	for (int i = 0; i < 5; i++) {
		_attack_random[i] = attacks[i];
	}
	std::cout << "Look out everybody! Things are about to get awesome! " << "Fragtrap with no name created\n";
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
	_range_message = "Coffee? Black... like my soul. FR4G-TP ";
	_melee_message = "Meet professor punch! FR4G-TP ";
	_not_enough_points = "What is that smell? Oh, never mind... it's just you! ";
	_taking_damage_message = "I'm too pretty to die! ";
	_armor_message = "Ladies looove a tough guy! ";
	_being_revived_message = "Holy crap, that worked? ";
	std::string attacks[5] = { "Get ready for some Fragtrap face time! ",
								"I'm a tornado of death and bullets! ",
								"Take two bullets, then call me in the morning. ",
								"Ready for the PUNCHline?! ",
								"I am Fire, I am Death! "};
	for (int i = 0; i < 5; i++) {
		_attack_random[i] = attacks[i];
	}
	std::cout << "Look out everybody! Things are about to get awesome! " << "Fragtrap with name " << _name << " created\n";
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
	_range_message = assign_fragtrap._range_message;
	_melee_message = assign_fragtrap._melee_message;
	_not_enough_points = assign_fragtrap._not_enough_points;
	_taking_damage_message = assign_fragtrap._taking_damage_message;
	_armor_message = assign_fragtrap._armor_message;
	_being_revived_message = assign_fragtrap._being_revived_message;
	for (int i = 0; i < 5; i++) {
		_attack_random[i] = assign_fragtrap._attack_random[i];
	}
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (_energy_points >= 25) {
		std::cout << std::setiosflags(std::ios::left) << std::setw(33) << "\033[0;35mENERGY ATTACK!\033[0;0m" << std::resetiosflags(std::ios::left);
		std::cout << _attack_random[rand() % 5] << _name << " attacks " << target << std::endl;
		_energy_points -= 25;
	}
	else {
		std::cout << std::setiosflags(std::ios::left) << std::setw(33) << "\033[1;34mOH NO!\033[0;0m" << std::resetiosflags(std::ios::left);
		std::cout << "Dangit, I'm out! " << _name << " needs to revive some energy points\n";
	}
}

FragTrap::~FragTrap() {
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death. " << "FragTrap " << _name << " destroyrd\n";
}