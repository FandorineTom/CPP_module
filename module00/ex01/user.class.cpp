#include "user.class.hpp"

User::User(void) {
	User::clear_contact();
}

std::string	User::get_name() const {
	return (name);
}

std::string User::get_surname() const {
	return (surname);
}

std::string User::get_nickname() const {
	return (nickname);
}

int			User::get_flag() const {
	return (flag);
}

void User::add_contact(void) {
	std::cout << "\tFirst name: ";
	getline(std::cin, name);
	std::cout << "\tLast name: ";
	getline(std::cin, surname);
	std::cout << "\tNickname: ";
	getline(std::cin, nickname);
	std::cout << "\tLogin: ";
	getline(std::cin, login);
	std::cout << "\tPostal address: ";
	getline(std::cin, postal);
	std::cout << "\tEmail address: ";
	getline(std::cin, email);
	std::cout << "\tPnone number: ";
	getline(std::cin, number);
	std::cout << "\tBirthday date: ";
	getline(std::cin, birthday);
	std::cout << "\tFavorite meal: ";
	getline(std::cin, favorite_meal);
	std::cout << "\tUnderwear color: ";
	getline(std::cin, underwear_color);
	std::cout << "\tDarkest secret: ";
	getline(std::cin, darkest_secret);
	flag = 1;
}

void User::clear_contact(void) {
	flag = 0;
	name.clear();
	surname.clear();
	nickname.clear();
	login.clear();
	postal.clear();
	email.clear();
	number.clear();
	birthday.clear();
	favorite_meal.clear();
	underwear_color.clear();
	darkest_secret.clear();
}

void User::print_contact(void) const {
	if (!flag) {
		std::cout << "This contact doesn't exist yet" << std::endl;
		return ;
	}
	std::cout << std::setw(25) << "First name: " << name << std::endl;
	std::cout << std::setw(25) << "Last name: " << surname << std::endl;
	std::cout << std::setw(25) << "Nickname: " << nickname << std::endl;
	std::cout << std::setw(25) << "Login: " << login << std::endl;
	std::cout << std::setw(25) << "Postal address: " << postal << std::endl;
	std::cout << std::setw(25) << "Email address: " << email << std::endl;
	std::cout << std::setw(25) << "Pnone number: " << number << std::endl;
	std::cout << std::setw(25) << "Birthday date: " << birthday << std::endl;
	std::cout << std::setw(25) << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << std::setw(25) << "Underwear color: " << underwear_color << std::endl;
	std::cout << std::setw(25) << "Darkest secret: " << darkest_secret << std::endl;
}

User::~User(void) {
	User::clear_contact();
}