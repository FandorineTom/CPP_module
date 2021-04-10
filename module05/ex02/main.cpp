#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main()
{
	std::cout << "\033[0;36m\t*** ShrubberyCreationForm tests ***\033[0;0m\n\n";
	std::cout << "\t\t-------NORMAL---------\n\n";
	try
	{
		Bureaucrat b("Joey", 1);
		std::cout << b;
		ShrubberyCreationForm f("home");
		std::cout << f;
		b.signForm(f);
		std::cout << f;
		b.executeForm(f);
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}

	std::cout << "\n\t\t--------EXECUTING UNSIGNED FORM--------\n\n";
	try
	{
		Bureaucrat b1("Ross", 150);
		std::cout << b1;
		ShrubberyCreationForm f1("office");
		std::cout << f1;
		b1.signForm(f1);
		std::cout << f1;
		b1.executeForm(f1);
		std::cout << f1;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\n\t\t--------TOO LOW TO EXECUTE--------\n\n";
	try
	{
		Bureaucrat b2("Chandler", 145);
		std::cout << b2;
		ShrubberyCreationForm f2("office hall");
		std::cout << f2;
		b2.signForm(f2);
		std::cout << f2;
		b2.executeForm(f2);
		std::cout << f2;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}

	std::cout << "\033[0;36m\n\t*** RobotomyRequestForm tests ***\033[0;0m\n\n";
	std::cout << "\t\t-------NORMAL---------\n\n";
	try
	{
		Bureaucrat b3("Monica", 1);
		std::cout << b3;
		RobotomyRequestForm f3("Tea cattle");
		std::cout << f3;
		b3.signForm(f3);
		std::cout << f3;
		b3.executeForm(f3);
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}

	std::cout << "\n\t\t--------EXECUTING UNSIGNED FORM--------\n\n";
	try
	{
		Bureaucrat b4("Rachel", 150);
		std::cout << b4;
		RobotomyRequestForm f4("Vacuum cleaner");
		std::cout << f4;
		b4.signForm(f4);
		std::cout << f4;
		b4.executeForm(f4);
		std::cout << f4;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\n\t\t--------TOO LOW TO EXECUTE--------\n\n";
	try
	{
		Bureaucrat b5("Phoebe", 70);
		std::cout << b5;
		RobotomyRequestForm f5("Cooker");
		std::cout << f5;
		b5.signForm(f5);
		std::cout << f5;
		b5.executeForm(f5);
		std::cout << f5;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}

	std::cout << "\033[0;36m\n\t*** PresidentialPardonForm tests ***\033[0;0m\n\n";
	std::cout << "\t\t-------NORMAL---------\n\n";
	try
	{
		Bureaucrat b6("Richard", 1);
		std::cout << b6;
		PresidentialPardonForm f6("Monica");
		std::cout << f6;
		b6.signForm(f6);
		std::cout << f6;
		b6.executeForm(f6);
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}

	std::cout << "\n\t\t--------EXECUTING UNSIGNED FORM--------\n\n";
	try
	{
		Bureaucrat b7("Gunther", 150);
		std::cout << b7;
		PresidentialPardonForm f7("Rachel");
		std::cout << f7;
		b7.signForm(f7);
		std::cout << f7;
		b7.executeForm(f7);
		std::cout << f7;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\n\t\t--------TOO LOW TO EXECUTE--------\n\n";
	try
	{
		Bureaucrat b8("Janice", 20);
		std::cout << b8;
		PresidentialPardonForm f8("Chandler");
		std::cout << f8;
		b8.signForm(f8);
		std::cout << f8;
		b8.executeForm(f8);
		std::cout << f8;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
}