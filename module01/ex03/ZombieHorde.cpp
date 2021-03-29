#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	_N = N;
	_horde = new Zombie[N];
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		_horde[i].randomChump();
}

void	ZombieHorde::announce() {
	for (int i = 0; i < _N; i++) {
		_horde[i].announce();
	}
}

ZombieHorde::~ZombieHorde() {
	delete[] _horde;
	std::cout << "The Horde is deleted\n";
}
