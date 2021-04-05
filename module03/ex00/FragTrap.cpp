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
	std::string attacks[5] = { "Get ready for some Fragtrap face time!",
								"I'm a tornado of death and bullets!",
								"Take two bullets, then call me in the morning.",
								"Ready for the PUNCHline?!",
								"I am Fire, I am Death!"};
	for (int i = 0; i < 5; i++) {
		_attack_random[i] = attacks[i];
	}
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
	for (int i = 0; i < 5; i++) {
		_attack_random[i] = assign_fragtrap._attack_random[i];
	}
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target) const {
	if (!_hit_points) {
		std::cout << std::setw(20) << "STOP!";
		std::cout << "What is that smell? Oh, never mind... it's just you! " << _name << " needs to be revivde to attack\n";
	}
	else {
		std::cout << std::setw(20) << "RANGED ATTACK: ";
		std::cout << "Coffee? Black... like my soul. FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << "points of damage!\n";
	}
}

void	FragTrap::meleeAttack(std::string const &target) const {
	if (!_hit_points) {
		std::cout << std::setw(15) << "STOP!";
		std::cout << "What is that smell? Oh, never mind... it's just you! " << _name << " needs to be revivde to attack\n";
	}
	else {
		std::cout << std::setw(15) << "MELEE ATTACK:";
		std::cout << "Meet professor punch! FR4G-TP " << _name << " attacks " << target << " in melee, causing " << _melee_attack_damage << "points of damage!\n";
	}
}

void	FragTrap::takeDamage(unsigned amount) {
	int res;

	if (amount < _armor_damage_reduction) {
		std::cout << std::setw(15) << "SHIELDS RULE!";
		std::cout << "Ladies looove a tough guy!" << _name << "reflected all the attacks, no damage caused\n";
		return ;
	}
	else if ((amount - _armor_damage_reduction) < _hit_points)
		res = amount - _armor_damage_reduction;
	else
		res = _hit_points;
	std::cout  << std::setw(15) << "AWWW!";
	std::cout << "I'm too pretty to die! " << _name << " taken " << res << " points of damage\n";
	_hit_points -= res;
}

void	FragTrap::beRepaired(unsigned amount) {
	int res;

	if ((amount + _hit_points) < _max_hit_points)
		res = amount;
	else
		res = _max_hit_points - _hit_points;
	std::cout << std::setw(15) << "YEEHAW!";
	std::cout << "Holy crap, that worked? " << _name << "revived " << res << " hit points\n";
	_hit_points += res;
	_energy_points = (amount + _energy_points < _max_energy_points) ? _energy_points + amount : _max_energy_points;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (_energy_points >= 25) {
		std::cout << std::setw(15) << "ENERGY ATTACK!";
		std::cout << _attack_random[rand() % 10] << _name << " attacks " << target << std::endl;
		_energy_points -= 25;
	}
	else {
		std::cout << std::setw(15) << "ENERGY ATTACK!";
		std::cout << "Dangit, I'm out! " << _name << " needs to revive some energy points\n";
	}
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destroyrd\n";
}