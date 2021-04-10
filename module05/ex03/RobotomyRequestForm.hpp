#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
	private:

		RobotomyRequestForm();
		std::string const _target;

	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
		~RobotomyRequestForm();

		virtual void	execute(const Bureaucrat &bureaucrat) const;
};