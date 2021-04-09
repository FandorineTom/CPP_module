#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(std::string const &type) : AMateria(type) {}

Cure::Cure(const Cure &copy) {*this = copy;}

Cure &Cure::operator=(const Cure &assign) {
	_xp = assign._xp;
	_type = assign._type;
	return *this;
}

AMateria *Cure::clone() const {return new Cure;}

void Cure::use(ICharacter &target) {
	_xp += 10;
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

Cure::~Cure() {}