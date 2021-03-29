#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
}

void	ZombieEvent::setZombietype(const std::string &zombie_type) {
	_type = zombie_type;
}

Zombie	*ZombieEvent::newZombie(const std::string &zombie_name) {
	Zombie *my_zombie = new Zombie(zombie_name, _type);
	return (my_zombie);
}

ZombieEvent::~ZombieEvent() {
}
