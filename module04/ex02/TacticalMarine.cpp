#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() : _name("TacticalMarine") {std::cout << "Tactical Marine ready for battle!\n";}

TacticalMarine::TacticalMarine(const TacticalMarine &copy) : _name("TacticalMarine") {
	std::cout << "Tactical Marine ready for battle!\n";
	*this = copy;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &assign) {
	_name = assign._name;
	return *this;
}

ISpaceMarine *TacticalMarine::clone()	const {return (new TacticalMarine(*this));}

void		TacticalMarine::battleCry()		const {std::cout << "For the holy PLOT!\n";}
void		TacticalMarine::rangedAttack()	const {std::cout << "* attacks with a bolter *\n";}
void		TacticalMarine::meleeAttack()	const {std::cout << "* attacks with a chainsword *\n";}

TacticalMarine::~TacticalMarine() {std::cout << "Aaargh...\n";}