#include "FragTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap	Claptrap("\033[0;32mME\033[0;0m");
	std::string	target("\033[0;31mENEMY\033[0;0m");

	Claptrap.rangedAttack(target);
	Claptrap.takeDamage(45);
}