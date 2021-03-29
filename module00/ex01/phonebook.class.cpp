#include "phonebook.class.hpp"

Phonebook::Phonebook(void) {
	Phonebook::clear();
}

void	Phonebook::add(void) {
	int i;

	i = 0;
	while (contacts[i].get_flag() && i < 8)
		i++;
	if (i >= 8)
		std::cout << "\tPhonebook already full! Cannot add any more contacts... Sorry, kid!" << std::endl;
	else
		contacts[i].add_contact();
}

void	Phonebook::clear(void) {
	for (int i = 0; i < 8; i++) {
		contacts[i].clear_contact();
	}
}

void	Phonebook::print_with_w(const std::string line) const {
	if (line.length() <= 10) {
		std::cout << std::setw(10) << line;
	}
	else {
		std::cout << std::setw(10) << line.substr(0, 9) + '.';
	}
}

void	Phonebook::print(void) const {
	for (int i = 0; contacts[i].get_flag() && i < 8; i++) {
		std::cout << std::setw(10) << i << "|";
		print_with_w(contacts[i].get_name());
		std::cout << "|";
		print_with_w(contacts[i].get_surname());
		std::cout << "|";
		print_with_w(contacts[i].get_nickname());
		std::cout << std::endl;
	}
}

User	Phonebook::get_contact(int i) const {
	return (contacts[i]);
}

Phonebook::~Phonebook(void) {
	Phonebook::clear();
}