#include "Amateria.hpp"

AMateria::AMateria() : _xp(0), _type("nothong") {}

AMateria::AMateria(std::string const &type) : _xp(0), _type(type) {}

AMateria::AMateria(const AMateria &copy) {*this = copy;}

AMateria &AMateria::operator=(const AMateria &assign) {
	_xp = assign._xp;
	_type = assign._type;
	return *this;
}

std::string	const	&AMateria::getType() const {return _type;}

unsigned int		AMateria::getXP() const {return _xp;}

void				AMateria::use(ICharacter &target) {
	(void)target;
	_xp += 10;
}

AMateria::~AMateria() {}
