#ifndef PEON_H
#define PEON_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim {
	private:
		std::string _name;
	
		Peon();

	public:
		Peon(std::string name);
		Peon(const Peon &copy_peon);
		virtual ~Peon();

		Peon &operator=(const Peon &assign_peon);

		const std::string	&getName() const;
		void				getpolymorphed() const;
};

#endif