#include "Form.hpp"

Form::Form() : _name("NO NAME"), _sign_grade(150), _exec_grade(150), _signed(0) {}

Form::Form(const std::string name, int sign, int exec) : _name(name), _sign_grade(sign), _exec_grade(exec), _signed(0) {
	if (_sign_grade < 1)
		throw GradeTooHighException("\033[0;31mThe sign grade is too HIGH, no one ever will sign it! Unless it's what you want...\033[0;0m\n");
	if (_sign_grade > 150)
		throw GradeTooLowException("\033[0;31mThe sign grade is too LOW, no one ever will sign it! Unless it's what you want...\033[0;0m\n");
	if (_exec_grade < 1)
		throw GradeTooHighException("\033[0;31mThe execute grade is too HIGH, no one ever will execute it! Unless it's what you want...\033[0;0m\n");
	if (_exec_grade > 150)
		throw GradeTooLowException("\033[0;31mThe execute grade is too LOW, no one ever will execute it! Unless it's what you want...\033[0;0m\n");
}

Form::Form(const Form &copy) : _name(copy._name), _sign_grade(copy._sign_grade), _exec_grade(copy._exec_grade), _signed(copy._signed) {}

Form	&Form::operator=(const Form &assign) {
	_signed = assign._signed;
	return *this;
}

std::string		Form::getName()			const {return _name;}
int				Form::getSignGrade()	const {return _sign_grade;}
int				Form::getExecGrade()	const {return _exec_grade;}
bool			Form::getSigned()		const {return _signed;}

void			Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= _sign_grade)
		_signed = 1;
	else
		throw GradeTooLowException("\033[0;33mBureacrat's grade is too low to sign the document, need to go higher\033[0;0m\n");
}

Form::GradeTooHighException::GradeTooHighException() : std::exception(), _mes("\033[0;35mThe grade cannot be higher than 1 (less than 1)\033[0;0m\n") {}
Form::GradeTooHighException::GradeTooHighException(const char *mes) : std::exception(), _mes(mes) {}
const char *Form::GradeTooHighException::what() const throw() {return _mes;}

Form::GradeTooLowException::GradeTooLowException() : std::exception(), _mes("\033[0;35mThe grade cannot be lower than 150 (more than 150)\033[0;0m\n") {}
Form::GradeTooLowException::GradeTooLowException(const char *mes) : std::exception(), _mes(mes) {}
const char *Form::GradeTooLowException::what() const throw() {return _mes;}

Form::~Form() {}

std::ostream &operator<<(std::ostream &s, const Form &form) {
	s << "Form named " << form.getName() << " requires " << form.getSignGrade()
	<< " grades to sign and " << form.getExecGrade() << " grades to execute. Right now the form is "
	<< (form.getSigned() ? "signed\n" : "not signed\n");
	return s;
}