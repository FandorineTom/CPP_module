#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "user.class.hpp"

class Phonebook 
{
	private:
		User contacts[8];
	public:
		Phonebook(void);

		void add(void);
		void clear(void);
		void print(void) const;
		void print_with_w(const std::string line) const;
		User get_contact(int i) const;

		~Phonebook(void);
};

#endif