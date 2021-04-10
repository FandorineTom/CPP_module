#include "Bureaucrat.hpp"

int		main()
{
	try
	{
		Bureaucrat b("Joey", 1);
		std::cout << b;
		b.decrement();
		std::cout << b;
		b.increment();
		std::cout << b;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\t\t----------------\n";
	try
	{
		Bureaucrat b1("Ross", 0);
		std::cout << b1;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\t\t----------------\n";
	try
	{
		Bureaucrat b4("Monica", 200);
		std::cout << b4;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\t\t----------------\n";
	try
	{
		Bureaucrat b2;
		std::cout << b2;
		b2.decrement();
		std::cout << b2;
		b2.increment();
		std::cout << b2;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\t\t----------------\n";
	try
	{
		Bureaucrat b5("Rachel", 1);
		std::cout << b5;
		b5.increment();
		std::cout << b5;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
	std::cout << "\t\t----------------\n";
	try
	{
		Bureaucrat b3("Chandler", 47);
		std::cout << b3;
		b3.decrement();
		std::cout << b3;
		b3.increment();
		std::cout << b3;
	}
	catch (std::exception &exept)
	{
		std::cout << exept.what();
	}
}