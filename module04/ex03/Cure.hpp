#pragma once

#include "Amateria.hpp"

class Cure : public AMateria {
	public:
	Cure();
	Cure(std::string const &type);
	Cure(const Cure &copy);
	Cure &operator=(const Cure &assign);
	virtual ~Cure();

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);

};