#pragma once

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	private:
		Form *_form;
		std::string _type[3];
		Form *(Intern::*_makeForm_pull[3])(const std::string &target);

		Intern(const Intern &copy);
		Intern &operator=(const Intern &assign);
	
	public:
		Intern();
		virtual ~Intern();

		Form *makeForm(const std::string &type, const std::string &target);
		Form *makeShrubbery(const std::string &target);
		Form *makeRobotomy(const std::string &target);
		Form *makePresident(const std::string &target);
		class NoSuchTypeException : public std::exception {
		private:
			const char	*_mes;
		public:
			NoSuchTypeException();
			NoSuchTypeException(const char *mes);
			const char	*what() const throw();
		};
};