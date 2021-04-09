#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() : _name("Assault Terminator") {std::cout << "* teleports from space *\n";}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy) : _name("Assault Terminator") {
	std::cout << "Tactical Marine ready for battle!\n";
	*this = copy;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &assign) {
	_name = assign._name;
	return *this;
}

ISpaceMarine *AssaultTerminator::clone()	const {return (new AssaultTerminator(*this));}

void		AssaultTerminator::battleCry()		const {std::cout << "This code is unclean. PURIFY IT!\n";}
void		AssaultTerminator::rangedAttack()	const {std::cout << "* does nothing *\n";}
void		AssaultTerminator::meleeAttack()	const {std::cout << "* attacks with chainfists *\n";}

AssaultTerminator::~AssaultTerminator() {std::cout << "I’ll be back...\n";}