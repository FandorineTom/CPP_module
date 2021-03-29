#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include "Zombie.hpp"

class ZombieHorde {
	public:
	ZombieHorde(int N);

	void	announce();

	~ZombieHorde();

	private:
		ZombieHorde();
		int		_N;
		Zombie	*_horde;
};

#endif