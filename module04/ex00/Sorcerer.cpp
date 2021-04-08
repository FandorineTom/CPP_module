#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("Nobody"), _title("Noone") {}

Sorcerer::Sorcerer(std::string name, std::string titile) : _name(name), _title(titile) {
	std::cout << _name << ", " << _title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &copy_sorcerer) {
	*this = copy_sorcerer;
	std::cout << _name << ", " << _title << ", is born!\n";
}

Sorcerer &Sorcerer::operator=(const Sorcerer &assign_sorcerer) {
	_name = assign_sorcerer._name;
	_title = assign_sorcerer._title;
	return(*this);
}

void	Sorcerer::introduction() const {
	std::cout << "I am " << _name << ", " << _title << ", and I like ponies!\n";
}

const std::string &Sorcerer::getName() const {
	return (_name);
}

const std::string &Sorcerer::getTitle() const {
	return (_title);
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!\n";
}

