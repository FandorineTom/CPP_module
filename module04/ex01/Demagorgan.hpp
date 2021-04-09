#pragma once

#include "Enemy.hpp"

class Demagorgan : public Enemy {
	public:
		Demagorgan();
		Demagorgan(const Demagorgan &copy_enemy);
		Demagorgan &operator=(const Demagorgan &assign_enemy);
		virtual ~Demagorgan();

		void	setHP(int hp = 100);
		void	setType(std::string type = "Demagorgan");

		void	takeDamage(int damage);
};