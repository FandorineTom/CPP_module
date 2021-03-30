#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
#include <sstream>

class Weapon {
	public:
		Weapon();
		Weapon(const std::string &weapon);

		const std::string	&getType() const;
		void				setType(const std::string &type);

		~Weapon();

	private:
		std::string _type;
};

#endif