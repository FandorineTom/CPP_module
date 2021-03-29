#include "ZombieEvent.hpp"

Zombie	randomChump(void) {
	std::string names[10] = {
		"Marcel",
		"Brat",
		"Matt",
		"Uve",
		"Rachel",
		"Monica",
		"Ross",
		"Joey",
		"Phoebe",
		"Chandler"
	};
	Zombie z = Zombie(names[rand() % 10], "fast");
	z.announce();
	return (z);
}

int		main(void) {
	std::cout << "\t\t|Zombie class check|" << std::endl;
	{
	Zombie my_zombie("Mark", "slow");
	my_zombie.announce();
	}
	std::cout << std::endl;

	std::cout << "\t\t|ZombieEvent class check|" << std::endl;
	{
	ZombieEvent my_zombie_event;
	Zombie *z1 = my_zombie_event.newZombie("Eliot");
	(*z1).announce();
	delete z1;

	my_zombie_event.setZombietype("bully");
	Zombie *z2 = my_zombie_event.newZombie("Eliot");
	(*z2).announce();
	delete z2;
	}
	std::cout << std::endl;

	std::cout << "\t\t|randomChump check|" << std::endl;
	{
	srand(time(NULL));
	Zombie z3 = randomChump();
	Zombie z4 = randomChump();
	Zombie z5 = randomChump();
	}
}