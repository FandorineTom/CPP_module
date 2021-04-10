#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
	private:

		PresidentialPardonForm();
		std::string const _target;

	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
		~PresidentialPardonForm();

		virtual void	execute(const Bureaucrat &bureaucrat) const;
};