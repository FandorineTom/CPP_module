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
	for (int i = 0; i < 5; i++) {
		_attack_random[i] = assign_ScavTrap._attack_random[i];
	}
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const &target) const {
	if (!_hit_points) {
		std::cout << std::setiosflags(std::ios::left) << std::setw(20) << "STOP!" << std::resetiosflags(std::ios::left);
		std::cout << "My assets... frozen! " << _name << " needs to be revivde to attack\n";
	}
	else {
		std::cout << std::setiosflags(std::ios::left) << std::setw(36) << "\033[0;37;41mRANGED ATTACK!\033[0;0m" << std::resetiosflags(std::ios::left);
		std::cout << "Don't bother with plastic surgery - there's NO fixing that! " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!\n";
	}
}

void	ScavTrap::meleeAttack(std::string const &target) const {
	if (!_hit_points) {
		std::cout << std::setiosflags(std::ios::left) << std::setw(20) << "STOP!" << std::resetiosflags(std::ios::left);
		std::cout << "My assets... frozen! " << _name << " needs to be revivde to attack\n";
	}
	else {
		std::cout << std::setiosflags(std::ios::left) << std::setw(36) << "\033[0;37;44mMELEE ATTACK!\033[0;0m" << std::resetiosflags(std::ios::left);
		std::cout << "This is why you do your homework! " << _name << " attacks " << target << " in melee, causing " << _melee_attack_damage << " points of damage!\n";
	}
}

void	ScavTrap::takeDamage(unsigned amount) {
	int res;

	if (amount < _armor_damage_reduction) {
		std::cout << std::setiosflags(std::ios::left) << std::setw(33) << "\033[1;37mSHIELDS RULE!\033[0;0m" << std::resetiosflags(std::ios::left);
		std::cout << "Armor soak increased! " << _name << " reflected all the attacks, no damage caused\n";
		return ;
	}
	else if ((amount - _armor_damage_reduction) < _hit_points)
		res = amount - _armor_damage_reduction;
	else
		res = _hit_points;
	std::cout << std::setiosflags(std::ios::left) << std::setw(33) << "\033[0;33mAWWW!\033[0;0m" << std::resetiosflags(std::ios::left);
	std::cout << "Why do I even feel pain?! " << _name << " taken " << res << " points of damage\n";
	_hit_points -= res;
}

void	ScavTrap::beRepaired(unsigned amount) {
	int res;
	int res1;

	if ((amount + _hit_points) < _max_hit_points)
		res = amount;
	else
		res = _max_hit_points - _hit_points;
	_hit_points += res;
	res1 = (amount + _energy_points < _max_energy_points) ? amount : _max_energy_points - _energy_points;
	_energy_points = (amount + _energy_points < _max_energy_points) ? _energy_points + amount : _max_energy_points;
	std::cout << std::setiosflags(std::ios::left) << std::setw(36) << "\033[1;37;42mYEEHAW!\033[0;0m" << std::resetiosflags(std::ios::left);
	std::cout << "Can I just say... yeehaw. " << _name << " revived " << res << " hit points and " << res1 << " energy points\n";
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