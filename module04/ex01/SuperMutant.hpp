#pragma once

#include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &copy_supermutant);
		SuperMutant &operator=(const SuperMutant &assign_supermutant);
		virtual ~SuperMutant();

		void	setHP(int hp = 170);
		void	setType(std::string type = "Super Mutant");

		void	takeDamage(int damage);
};