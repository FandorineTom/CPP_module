#include "FragTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap	Claptrap("\033[0;32mMORTY\033[0;0m");
	std::string	target("\033[0;31mRICK\033[0;0m");

	std::cout << std::endl;
	std::cout << "\t\t\tChecking every kind of attack and taking damage\n";
	std::cout << std::endl;
	Claptrap.rangedAttack(target);
	Claptrap.meleeAttack(target);
	Claptrap.takeDamage(3);
	Claptrap.rangedAttack(target);
	Claptrap.takeDamage(65);
	Claptrap.meleeAttack(target);
	Claptrap.takeDamage(50);
	Claptrap.rangedAttack(target);
	Claptrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tChecking repairing\n";
	std::cout << std::endl;
	Claptrap.rangedAttack(target);
	Claptrap.meleeAttack(target);
	Claptrap.beRepaired(40);
	Claptrap.rangedAttack(target);
	Claptrap.meleeAttack(target);
	Claptrap.beRepaired(80);
	Claptrap.rangedAttack(target);
	Claptrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tChecking random energy attacks\n";
	std::cout << std::endl;
	Claptrap.vaulthunter_dot_exe(target);
	Claptrap.vaulthunter_dot_exe(target);
	Claptrap.vaulthunter_dot_exe(target);
	Claptrap.vaulthunter_dot_exe(target);
	Claptrap.vaulthunter_dot_exe(target);
	Claptrap.beRepaired(40);
	Claptrap.vaulthunter_dot_exe(target);
	Claptrap.vaulthunter_dot_exe(target);
	Claptrap.beRepaired(100);
	Claptrap.vaulthunter_dot_exe(target);
	std::cout << std::endl;
}