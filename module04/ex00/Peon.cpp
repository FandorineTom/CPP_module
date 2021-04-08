#include "Peon.hpp"

Peon::Peon() : _name("Nobody") {}

Peon::Peon(std::string name) : Victim(name) {
	_name = name;
	std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &copy_peon) {
	*this = copy_peon;
	std::cout << "Zog zog.\n";
}

Peon &Peon::operator=(const Peon &assign_peon) {
	_name = assign_peon._name;
	return(*this);
}

const std::string &Peon::getName() const {
	return (_name);
}

void	Peon::getpolymorphed() const {
	std::cout << _name << " has been turned into a pink pony!\n";
}

Peon::~Peon() {
	std::cout << "Bleuark...\n";
}