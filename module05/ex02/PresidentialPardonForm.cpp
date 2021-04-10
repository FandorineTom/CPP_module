#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential Pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), _target(copy._target) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &assign) {
	(void)assign;
	return *this;
}

void			PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {
	Form::execute(bureaucrat);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox.*\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {}
