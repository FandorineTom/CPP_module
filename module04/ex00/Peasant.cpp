#include "Peasant.hpp"

Peasant::Peasant() : _name("Nobody") {}

Peasant::Peasant(std::string name) : Victim(name) {
	_name = name;
	std::cout << "I am tired...\n";
}

Peasant::Peasant(const Peasant &copy_peasant) {
	*this = copy_peasant;
	std::cout << "I am tired...\n";
}

Peasant &Peasant::operator=(const Peasant &assign_peasant) {
	_name = assign_peasant._name;
	return(*this);
}

const std::string &Peasant::getName() const {
	return (_name);
}

void	Peasant::getpolymorphed() const {
	std::cout << _name << " has been turned into a blue baloon!\n";
}

Peasant::~Peasant() {
	std::cout << "Pffffff.\n";
}