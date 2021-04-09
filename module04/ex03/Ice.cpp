#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const &type) : AMateria(type) {}

Ice::Ice(const Ice &copy) {*this = copy;}

Ice &Ice::operator=(const Ice &assign) {
	_xp = assign._xp;
	_type = assign._type;
	return *this;
}

AMateria *Ice::clone() const {return new Ice;}

void Ice::use(ICharacter &target) {
	_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice() {}