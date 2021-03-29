#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include "Zombie.hpp"

class ZombieEvent {
	public:
	ZombieEvent();

	void setZombietype(const std::string &zombie_type);
	Zombie *newZombie(const std::string &zombie_name);

	~ZombieEvent();

	private:
		std::string _type;
};

#endif