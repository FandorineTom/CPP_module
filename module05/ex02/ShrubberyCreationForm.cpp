#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubbery Creation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), _target(copy._target) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign) {
	(void)assign;
	return *this;
}

void			ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {
	Form::execute(bureaucrat);
	std::ofstream ofile(_target + "_shrubbery", std::ios::out);
	std::cout	<< "\033[0;32mBureaucrat " << bureaucrat.getName()
				<< " executed form " << getName() 
				<< " for target " << _target << "\033[0;0m\n";
	ofile << _tree;
	ofile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string const ShrubberyCreationForm::_tree = "\
              /,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
       |_|        |_|         |_|\n";
