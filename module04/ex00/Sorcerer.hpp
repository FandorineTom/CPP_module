#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include <string>

class Sorcerer {
	private:
		std::string _name;
		std::string _title;
	
	Sorcerer();

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &copy_sorcerer);
		~Sorcerer();

		Sorcerer &operator=(const Sorcerer &assign_sorcerer);

		const std::string	&getName() const;
		const std::string	&getTitle() const;
		void				introduction() const;
		// void				polymorph();
};

std::ostream &operator<<(std::ostream &s, const Sorcerer &sorcerer);

#endif