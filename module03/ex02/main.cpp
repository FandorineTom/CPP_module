#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap	Claptrap("\033[0;32mMORTY\033[0;0m");
	ScavTrap	Scavtrap("\033[0;32mRICK\033[0;0m");
	std::string	target("\033[0;31mOAF\033[0;0m");

	std::cout << std::endl;
	std::cout << "\t\t\tFLAGTRAP: Checking every kind of attack and taking damage\n";
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

	std::cout << "\t\t\tFLAGTRAP: Checking repairing\n";
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

	std::cout << "\t\t\tFLAGTRAP: Checking random energy attacks\n";
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

	std::cout << "\t\t\tSCAVTRAP: Checking every kind of attack and taking damage\n";
	std::cout << std::endl;
	Scavtrap.rangedAttack(target);
	Scavtrap.meleeAttack(target);
	Scavtrap.takeDamage(3);
	Scavtrap.rangedAttack(target);
	Scavtrap.takeDamage(65);
	Scavtrap.meleeAttack(target);
	Scavtrap.takeDamage(50);
	Scavtrap.rangedAttack(target);
	Scavtrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tSCAVTRAP: Checking repairing\n";
	std::cout << std::endl;
	Scavtrap.rangedAttack(target);
	Scavtrap.meleeAttack(target);
	Scavtrap.beRepaired(40);
	Scavtrap.rangedAttack(target);
	Scavtrap.meleeAttack(target);
	Scavtrap.beRepaired(80);
	Scavtrap.rangedAttack(target);
	Scavtrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tSCAVTRAP: Checking random energy attacks\n";
	std::cout << std::endl;
	Scavtrap.challengeNewcomer(target);
	Scavtrap.challengeNewcomer(target);
	Scavtrap.challengeNewcomer(target);
	Scavtrap.challengeNewcomer(target);
	Scavtrap.challengeNewcomer(target);
	Scavtrap.beRepaired(40);
	Scavtrap.challengeNewcomer(target);
	Scavtrap.challengeNewcomer(target);
	Scavtrap.beRepaired(100);
	Scavtrap.challengeNewcomer(target);
	std::cout << std::endl;
}