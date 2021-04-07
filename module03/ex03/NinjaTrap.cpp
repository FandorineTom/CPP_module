#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	_name = "Nobody";
	_range_message = "You wanna fight with me?! Put 'em up!.. Put 'em up? ";
	_melee_message = "Heh heh heh, squishy bits! ";
	_not_enough_points = "Who needs ammo anyway, am I right? ";
	_taking_damage_message = "Robot down! ";
	_armor_message = "Don't ask me where this ammo's coming from! ";
	_being_revived_message = "Hahahahaha! I'm alive! ";
	// std::string attacks[5] = { "Care to have a friendly duel? ",
	// 							"I will prove to you my robotic superiority! ",
	// 							"It's about to get magical! ",
	// 							"Man versus machine! Very tiny streamlined machine! ",
	// 							"Dance battle! Or, you know... regular battle. "};
	// for (int i = 0; i < 5; i++) {
	// 	_attack_random[i] = attacks[i];
	// }
	std::cout << "Glitching weirdness is a term of endearment, right? " << "NinjaTrap with no name created\n";
}

NinjaTrap::NinjaTrap(std::string const &name) {
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	_name = name;
	_range_message = "You wanna fight with me?! Put 'em up!.. Put 'em up? ";
	_melee_message = "Heh heh heh, squishy bits! ";
	_not_enough_points = "Who needs ammo anyway, am I right? ";
	_taking_damage_message = "Robot down! ";
	_armor_message = "Don't ask me where this ammo's coming from! ";
	_being_revived_message = "Hahahahaha! I'm alive! ";
	// std::string attacks[5] = { "Care to have a friendly duel? ",
	// 							"I will prove to you my robotic superiority! ",
	// 							"It's about to get magical! ",
	// 							"Man versus machine! Very tiny streamlined machine! ",
	// 							"Dance battle! Or, you know... regular battle. "};
	// for (int i = 0; i < 5; i++) {
	// 	_attack_random[i] = attacks[i];
	// }
	std::cout << "Glitching weirdness is a term of endearment, right? " << "NinjaTrap with name " << _name << " created\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy_NinjaTrap) {
	*this = copy_NinjaTrap;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &assign_NinjaTrap) {
	_name = assign_NinjaTrap._name;
	_hit_points = assign_NinjaTrap._hit_points;
	_max_hit_points = assign_NinjaTrap._max_hit_points;
	_energy_points = assign_NinjaTrap._energy_points;
	_max_energy_points = assign_NinjaTrap._max_energy_points;
	_level = assign_NinjaTrap._level;
	_melee_attack_damage = assign_NinjaTrap._melee_attack_damage;
	_ranged_attack_damage = assign_NinjaTrap._ranged_attack_damage;
	_armor_damage_reduction = assign_NinjaTrap._armor_damage_reduction;
	_range_message = assign_NinjaTrap._range_message;
	_melee_message = assign_NinjaTrap._melee_message;
	_not_enough_points = assign_NinjaTrap._not_enough_points;
	_taking_damage_message = assign_NinjaTrap._taking_damage_message;
	_armor_message = assign_NinjaTrap._armor_message;
	_being_revived_message = assign_NinjaTrap._being_revived_message;
	// for (int i = 0; i < 5; i++) {
	// 	_attack_random[i] = assign_NinjaTrap._attack_random[i];
	// }
	return (*this);
}

void	NinjaTrap::ninjaShoebox(FragTrap &claptrap, std::string const &target) {
	claptrap.vaulthunter_dot_exe(target);
}

void	NinjaTrap::ninjaShoebox(ClapTrap &claptrap, std::string const &target) {
	claptrap.rangedAttack(target);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &claptrap, std::string const &target) {
	claptrap.challengeNewcomer(target);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &claptrap, std::string const &target) {
	claptrap.meleeAttack(target);
}

NinjaTrap::~NinjaTrap() {
	std::cout << "You got me! " << "NinjaTrap " << _name << " destroyrd\n";
}