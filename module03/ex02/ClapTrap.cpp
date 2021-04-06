#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_hit_points = 0;
	_max_hit_points = 0;
	_energy_points = 0;
	_max_energy_points = 0;
	_level = 0;
	_melee_attack_damage = 0;
	_ranged_attack_damage = 0;
	_armor_damage_reduction = 0;
	_range_message = "\033[0;37;41mRANGED ATTACK!\033[0;0m";
	_melee_message = "\033[0;37;44mMELEE ATTACK!\033[0;0m";
	_name = "Nobody";
	std::cout << "I am born! " << "ClapTrap with no name created\n";
}

ClapTrap::ClapTrap(std::string const &name) {
	_hit_points = 0;
	_max_hit_points = 0;
	_energy_points = 0;
	_max_energy_points = 0;
	_level = 0;
	_melee_attack_damage = 0;
	_ranged_attack_damage = 0;
	_armor_damage_reduction = 0;
	_name = name;
	_range_message = "\033[0;37;41mRANGED ATTACK!\033[0;0m";
	_melee_message = "\033[0;37;44mMELEE ATTACK!\033[0;0m";
	std::cout << "I am born! " << "ClapTrap with name " << _name << " created\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy_ClapTrap) {
	*this = copy_ClapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign_ClapTrap) {
	_name = assign_ClapTrap._name;
	_hit_points = assign_ClapTrap._hit_points;
	_max_hit_points = assign_ClapTrap._max_hit_points;
	_energy_points = assign_ClapTrap._energy_points;
	_max_energy_points = assign_ClapTrap._max_energy_points;
	_level = assign_ClapTrap._level;
	_melee_attack_damage = assign_ClapTrap._melee_attack_damage;
	_ranged_attack_damage = assign_ClapTrap._ranged_attack_damage;
	_armor_damage_reduction = assign_ClapTrap._armor_damage_reduction;
	_range_message = assign_ClapTrap._range_message;
	_melee_message = assign_ClapTrap._melee_message;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target) const {
	if (!_hit_points) {
		std::cout << std::setiosflags(std::ios::left) << std::setw(20) << "STOP!" << std::resetiosflags(std::ios::left);
		std::cout << "My assets... frozen! " << _name << " needs to be revivde to attack\n";
	}
	else {
		std::cout << std::setiosflags(std::ios::left) << std::setw(36) << "\033[0;37;41mRANGED ATTACK!\033[0;0m" << std::resetiosflags(std::ios::left);
		std::cout << "Don't bother with plastic surgery - there's NO fixing that! " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!\n";
	}
}

void	ClapTrap::meleeAttack(std::string const &target) const {
	if (!_hit_points) {
		std::cout << std::setiosflags(std::ios::left) << std::setw(20) << "STOP!" << std::resetiosflags(std::ios::left);
		std::cout << "My assets... frozen! " << _name << " needs to be revivde to attack\n";
	}
	else {
		std::cout << std::setiosflags(std::ios::left) << std::setw(36) << "\033[0;37;44mMELEE ATTACK!\033[0;0m" << std::resetiosflags(std::ios::left);
		std::cout << "This is why you do your homework! " << _name << " attacks " << target << " in melee, causing " << _melee_attack_damage << " points of damage!\n";
	}
}

void	ClapTrap::takeDamage(unsigned amount) {
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

void	ClapTrap::beRepaired(unsigned amount) {
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

ClapTrap::~ClapTrap() {
	std::cout << "You got me! " << "ClapTrap " << _name << " destroyrd\n";
}