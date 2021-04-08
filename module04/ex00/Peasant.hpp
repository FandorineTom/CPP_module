#ifndef PEASANT_H
#define PEASANT_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peasant : public Victim {
	private:
		std::string _name;
	
		Peasant();

	public:
		Peasant(std::string name);
		Peasant(const Peasant &copy_peasant);
		~Peasant();

		Peasant &operator=(const Peasant &assign_peasant);

		const std::string	&getName() const;
		void				getpolymorphed() const;
};

#endif