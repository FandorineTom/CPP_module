#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>
#include <sstream>

class Brain {
	public:
		Brain();

		std::string	identify() const;
		std::string	getSyze() const;

		~Brain();

	private:
		std::string _size;
};

#endif