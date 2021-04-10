#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		const int			_sign_grade;
		const int			_exec_grade;
		bool				_signed;

	public:
		Form();
		Form(const std::string name, int sign, int exec);
		Form(const Form &copy);
		Form &operator=(const Form &assign);
		~Form();

		std::string		getName() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		bool			getSigned() const;
		void			beSigned(const Bureaucrat &bureaucrat);

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

std::ostream &operator<<(std::ostream &s, const Form &form);