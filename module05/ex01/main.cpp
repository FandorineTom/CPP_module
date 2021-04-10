#include "Bureaucrat.hpp"

int		main()
{
	std::cout << "\t\t-------NORMAL---------\n\n";
	try
	{
		Bureaucrat b("Joey", 1);
		std::cout << b;
		Form f("MONEY", 150, 150);
		std::cout << f;
		b.signForm(f);
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\n\t\t--------TOO LOW TO SIGN--------\n\n";
	try
	{
		Bureaucrat b1("Ross", 68);
		std::cout << b1;
		Form f1("DINOSAUR", 1, 100);
		std::cout << f1;
		b1.signForm(f1);
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\n\t\t-------SIGN GRADE 200---------\n\n";
	try
	{
		Form f2("CHEF", 200, 1);
		std::cout << f2;
	
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\n\t\t-------EXEC GRADE 0---------\n\n";
	try
	{
		Form f2("CHEF", 1, 0);
		std::cout << f2;
	
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
}