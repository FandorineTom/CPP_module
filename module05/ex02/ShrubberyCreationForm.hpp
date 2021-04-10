#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
	private:

		ShrubberyCreationForm();
		static std::string const _tree;
		std::string const _target;

	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
		~ShrubberyCreationForm();

		virtual void	execute(const Bureaucrat &bureaucrat) const;
};