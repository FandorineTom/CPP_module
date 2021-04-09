#pragma once

#include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &copy_radscorpion);
		RadScorpion &operator=(const RadScorpion &assign_radscorpion);
		virtual ~RadScorpion();

		void	setHP(int hp = 80);
		void	setType(std::string type = "RadScorpion");

		void	takeDamage(int damage);
};