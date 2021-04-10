#include "Intern.hpp"

Intern::Intern() : _form(NULL) {
	_type[0] = "Shrubbery Creation";
	_type[1] = "Robotomy Request";
	_type[2] = "Presidential Pardon";
	this->_makeForm_pull[0] = &Intern::makeShrubbery;
	this->_makeForm_pull[1] = &Intern::makeRobotomy;
	this->_makeForm_pull[2] = &Intern::makePresident;
}

Intern::Intern(const Intern &copy) {(void)copy;}

Intern &Intern::operator=(const Intern &assign) {
	(void)assign;
	return *this;
}

Form *Intern::makeForm(const std::string &type, const std::string &target) {
	for (int i = 0; i < 3; i++) {
		if (type == _type[i]) {
			_form = (this->*_makeForm_pull[i])(target);
			std::cout << "Intern creates " << type << std::endl;
			return _form;
		}
	}
	throw NoSuchTypeException();
}

Intern::NoSuchTypeException::NoSuchTypeException() : std::exception(), _mes("\033[0;35mNo such type of the form, double check, please...\033[0;0m\n") {}
Intern::NoSuchTypeException::NoSuchTypeException(const char *mes) : std::exception(), _mes(mes) {}
const char *Intern::NoSuchTypeException::what() const throw() {return _mes;}

Form *Intern::makeShrubbery(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomy(const std::string &target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresident(const std::string &target) {
	return new PresidentialPardonForm(target);
}

std::string _type[3] = {
			"Shrubbery Creation",
			"Robotomy Request",
			"Presidential Pardon"
		};

Form *(Intern::*_makeForm_pull[3])(const std::string &target) = {
			&Intern::makeShrubbery,
			&Intern::makeRobotomy,
			&Intern::makePresident
		};

Intern::~Intern() {
	if(_form)
		delete _form;
	_form = NULL;
}

