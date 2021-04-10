#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &assign);
		~Bureaucrat();

		std::string		getName() const;
		int				getGrade() const;
		void			increment();
		void			decrement();
		void			signForm(Form &form);
		void			executeForm(Form &form);

		class GradeTooHighException : public std::exception
		{
		private:
			const char	*_mes;
		public:
			GradeTooHighException();
			GradeTooHighException(const char *mes);
			const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		private:
			const char	*_mes;
		public:
			GradeTooLowException();
			GradeTooLowException(const char *mes);
			const char	*what() const throw();
		};		
};

std::ostream &operator<<(std::ostream &s, const Bureaucrat &bureaucrat);