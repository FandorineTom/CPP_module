#include "Victim.hpp"

Victim::Victim() : _name("Nobody") {}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared!\n";
}

Victim::Victim(const Victim &copy_victim) {
	*this = copy_victim;
		std::cout << "Some random victim called " << _name << " just appeared!\n";
}

Victim &Victim::operator=(const Victim &assign_victim) {
	_name = assign_victim._name;
	return(*this);
}

void	Victim::introduction() const {
	std::cout << "I am " << _name << " and I like otters!\n";
}

const std::string &Victim::getName() const {
	return (_name);
}

void	Victim::getpolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!\n";
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!\n";
}

std::ostream &operator<<(std::ostream &s, const Victim &victim) {
	s << "I am " << victim.getName() << " and I like otters!\n";
	return (s);
}