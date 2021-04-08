#ifndef FARMER_H
#define FARMER_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Farmer : public Victim {
	private:
		std::string _name;
	
		Farmer();

	public:
		Farmer(std::string name);
		Farmer(const Farmer &copy_farmeer);
		~Farmer();

		Farmer &operator=(const Farmer &assign_farmeer);

		const std::string	&getName() const;
		void				getpolymorphed() const;
};

#endif