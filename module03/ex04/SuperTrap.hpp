#ifndef SUPERTRAP_H
#define SUPERTRAP_H

// #include <iostream>
// #include <string>
// #include <iomanip>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap{
	public:
		SuperTrap();
		SuperTrap(std::string const &name);
		SuperTrap(const SuperTrap &copy_supertrap);
		~SuperTrap();

		SuperTrap &operator=(const SuperTrap &assign_supertrap);
};

#endif