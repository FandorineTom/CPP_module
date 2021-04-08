#include "Farmer.hpp"

Farmer::Farmer() : _name("Nobody") {}

Farmer::Farmer(std::string name) : Victim(name) {
	_name = name;
	std::cout << "Where is my favourite cow...\n";
}

Farmer::Farmer(const Farmer &copy_farmer) {
	*this = copy_farmer;
	std::cout << "I am tired...\n";
}

Farmer &Farmer::operator=(const Farmer &assign_farmer) {
	_name = assign_farmer._name;
	return(*this);
}

const std::string &Farmer::getName() const {
	return (_name);
}

void	Farmer::getpolymorphed() const {
	std::cout << _name << " has been turned into a brown dog!\n";
}

Farmer::~Farmer() {
	std::cout << "Woof woof woof!\n";
}