#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));
	ClapTrap	Claptrap("\033[0;32mCORLEONE\033[0;0m");
	FragTrap	Fragtrap("\033[0;32mMORTY\033[0;0m");
	ScavTrap	Scavtrap("\033[0;32mRICK\033[0;0m");
	NinjaTrap	Ninjatrap("\033[0;32mMICHELANGELO\033[0;0m");
	SuperTrap	Supertrap("\033[0;32mSUPERB\033[0;0m");
	std::string	target("\033[0;31mOAF\033[0;0m");

	std::cout << std::endl;
	std::cout << "\t\t\tFLAGTRAP: Checking every kind of attack and taking damage\n";
	std::cout << std::endl;
	Fragtrap.rangedAttack(target);
	Fragtrap.meleeAttack(target);
	Fragtrap.takeDamage(3);
	Fragtrap.rangedAttack(target);
	Fragtrap.takeDamage(65);
	Fragtrap.meleeAttack(target);
	Fragtrap.takeDamage(50);
	Fragtrap.rangedAttack(target);
	Fragtrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tFLAGTRAP: Checking repairing\n";
	std::cout << std::endl;
	Fragtrap.rangedAttack(target);
	Fragtrap.meleeAttack(target);
	Fragtrap.beRepaired(40);
	Fragtrap.rangedAttack(target);
	Fragtrap.meleeAttack(target);
	Fragtrap.beRepaired(80);
	Fragtrap.rangedAttack(target);
	Fragtrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tFLAGTRAP: Checking random energy attacks\n";
	std::cout << std::endl;
	Fragtrap.vaulthunter_dot_exe(target);
	Fragtrap.vaulthunter_dot_exe(target);
	Fragtrap.vaulthunter_dot_exe(target);
	Fragtrap.vaulthunter_dot_exe(target);
	Fragtrap.vaulthunter_dot_exe(target);
	Fragtrap.beRepaired(40);
	Fragtrap.vaulthunter_dot_exe(target);
	Fragtrap.vaulthunter_dot_exe(target);
	Fragtrap.beRepaired(100);
	Fragtrap.vaulthunter_dot_exe(target);
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

	std::cout << "\t\t\tNINJATRAP: Checking every kind of attack and taking damage\n";
	std::cout << std::endl;
	Ninjatrap.rangedAttack(target);
	Ninjatrap.meleeAttack(target);
	Ninjatrap.takeDamage(3);
	Ninjatrap.rangedAttack(target);
	Ninjatrap.takeDamage(65);
	Ninjatrap.meleeAttack(target);
	Ninjatrap.takeDamage(50);
	Ninjatrap.rangedAttack(target);
	Ninjatrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tNINJATRAP: Checking repairing\n";
	std::cout << std::endl;
	Ninjatrap.rangedAttack(target);
	Ninjatrap.meleeAttack(target);
	Ninjatrap.beRepaired(40);
	Ninjatrap.rangedAttack(target);
	Ninjatrap.meleeAttack(target);
	Ninjatrap.beRepaired(80);
	Ninjatrap.rangedAttack(target);
	Ninjatrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tNINJATRAP: Checking ninja shoebox\n";
	std::cout << std::endl;
	Ninjatrap.ninjaShoebox(Fragtrap, target);
	Ninjatrap.ninjaShoebox(Scavtrap, target);
	Ninjatrap.ninjaShoebox(Claptrap, target);
	Ninjatrap.ninjaShoebox(Ninjatrap, target);
	std::cout << std::endl;

			std::cout << "\t\t\tSUPERTRAP: Checking every kind of attack and taking damage\n";
	std::cout << std::endl;
	Supertrap.rangedAttack(target);
	Supertrap.meleeAttack(target);
	Supertrap.takeDamage(3);
	Supertrap.rangedAttack(target);
	Supertrap.takeDamage(65);
	Supertrap.meleeAttack(target);
	Supertrap.takeDamage(50);
	Supertrap.rangedAttack(target);
	Supertrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tSUPERTRAP: Checking repairing\n";
	std::cout << std::endl;
	Supertrap.rangedAttack(target);
	Supertrap.meleeAttack(target);
	Supertrap.beRepaired(40);
	Supertrap.rangedAttack(target);
	Supertrap.meleeAttack(target);
	Supertrap.beRepaired(80);
	Supertrap.rangedAttack(target);
	Supertrap.meleeAttack(target);
	std::cout << std::endl;

	std::cout << "\t\t\tSUPERTRAP: Checking ninja shoebox\n";
	std::cout << std::endl;
	Supertrap.ninjaShoebox(Fragtrap, target);
	Supertrap.ninjaShoebox(Scavtrap, target);
	Supertrap.ninjaShoebox(Claptrap, target);
	Supertrap.ninjaShoebox(Ninjatrap, target);
	Supertrap.vaulthunter_dot_exe(target);
	Supertrap.vaulthunter_dot_exe(target);
	Supertrap.vaulthunter_dot_exe(target);
	Supertrap.vaulthunter_dot_exe(target);
	Supertrap.vaulthunter_dot_exe(target);
	Supertrap.beRepaired(40);
	Supertrap.vaulthunter_dot_exe(target);
	Supertrap.vaulthunter_dot_exe(target);
	Supertrap.beRepaired(100);
	Supertrap.vaulthunter_dot_exe(target);
	std::cout << std::endl;
}