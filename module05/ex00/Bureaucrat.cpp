#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NO NAME"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	Bureaucrat(copy._name, copy._grade);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &assign) {
	_grade = assign._grade;
	return *this;
}

std::string		Bureaucrat::getName()	const {return _name;}
int				Bureaucrat::getGrade()	const {return _grade;}

void			Bureaucrat::increment() {
	if ((_grade - 1) < 1)
		throw GradeTooHighException("\033[0;31mCannot increment, bureacrat already has the highest grade\033[0;0m\n");
	_grade -= 1;
}

void			Bureaucrat::decrement() {
	if ((_grade + 1) > 150)
		throw GradeTooLowException("\033[0;31mCannot decrement, bureacrat already has the lowest grade\033[0;0m\n");
	_grade += 1;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::exception(), _mes("\033[0;35mBureacrat's grade cannot be higher than 1 (less than 1)\033[0;0m\n") {}
Bureaucrat::GradeTooHighException::GradeTooHighException(const char *mes) : std::exception(), _mes(mes) {}
const char *Bureaucrat::GradeTooHighException::what() const throw() {return _mes;}

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::exception(), _mes("\033[0;35mBureacrat's grade cannot be lower than 150 (more than 150)\033[0;0m\n") {}
Bureaucrat::GradeTooLowException::GradeTooLowException(const char *mes) : std::exception(), _mes(mes) {}
const char *Bureaucrat::GradeTooLowException::what() const throw() {return _mes;}

Bureaucrat::~Bureaucrat() {}

std::ostream &operator<<(std::ostream &s, const Bureaucrat &bureaucrat) {
	s << "Bureaucrat named " << bureaucrat.getName() << " with grade " << bureaucrat.getGrade() << " is now here to do some work\n";
	return s;
}