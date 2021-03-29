#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <iomanip>

class User {
	public:
		User(void);

		std::string	get_name() const;
		std::string	get_surname() const;
		std::string	get_nickname() const;
		int			get_flag() const;

		void add_contact(void);
		void clear_contact(void);
		void print_contact(void) const;

		~User(void);

	private:
		int			flag;
		std::string name;
		std::string surname;
		std::string	nickname;
		std::string	login;
		std::string	postal;
		std::string	email;
		std::string	number;
		std::string	birthday;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
};

#endif