#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"

class Human {
	public:
		Human();

		std::string	identify() const;
		const Brain &getBrain() const;	

		~Human();

	private:
		const Brain brain;
};
#endif