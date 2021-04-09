#pragma once

#include <string>
#include <iostream>

class Enemy {
	protected:
		int			_hp;
		std::string	_type;

		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &copy_enemy);
		Enemy &operator=(const Enemy &assign_enemy);

	public:
		virtual ~Enemy();

		std::string	getType() const;
		int			getHP() const;

		virtual void takeDamage(int);
};