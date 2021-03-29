#include "ZombieHorde.hpp"

int		main(void) {
	std::cout << "\t\t|Zombie class check|" << std::endl;
	{
	Zombie my_zombie("Mark", "slow");
	my_zombie.announce();
	}
	std::cout << std::endl;

	std::cout << "\t\t|ZombieHorde class check|" << std::endl;
	{
		std::cout << "Enter the number of zombies in a horde ";
		int i;
		std::cin >> i;
		ZombieHorde my_horde(i);
		my_horde.announce();
	}
}