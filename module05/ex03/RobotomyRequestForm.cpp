#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Rorbotomy Request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), _target(copy._target) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &assign) {
	(void)assign;
	return *this;
}

void			RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const {
	Form::execute(bureaucrat);
	srand(time(0));
	std::cout << "* some drilling noises (sorry, couldn't figure that out) *\n";
	if ((rand() % 100) > 50)
		std::cout << "\033[0;32m" << _target << " has been robotomized successfully\033[0;0m\n";
	else
		std::cout << "\033[0;31mRobotomization failed\033[0;0m\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {}
