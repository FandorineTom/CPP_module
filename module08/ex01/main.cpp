#include "span.hpp"

int main()
{
	std::cout << "\t\t-------SUBJECT TEST-------\n\n";
	srand(time(0));
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		// std::cout << sp.getArray()->size() << std::endl;
	}

	std::cout << "\n\t\t-------EMPTY ARRAY TEST-------\n\n";
	{
		Span sp = Span(15);
		try {
		std::cout << "Shortest span - " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span - " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "\n\t\t-------ARRAY WITH ONE ELEMENT TEST-------\n\n";
	{
		Span sp = Span(15);
		sp.addNumber(5);
		try {
		std::cout << "Longest span - " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span - " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}

	std::cout << "\n\t\t-------ARRAY TEST-------\n\n";
	{
		Span sp = Span(15);
		sp.betterAddNumber(15);
		for (std::vector<int>::const_iterator i = sp.getArray()->begin(); i != sp.getArray()->end(); ++i)
			std::cout << *i << ' ';
		std::cout << std::endl;
		std::cout << "Shortest span - " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span - " << sp.longestSpan() << std::endl;

		std::cout << "MAX in array - " << sp.max() <<std::endl;
		std::cout << "MIN in array - " << sp.min() <<std::endl;
		try {
			sp.addNumber(10001);
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}

	std::cout << "\n\t\t-------HUGE RANDOM ARRAY TEST-------\n\n";
	{
		Span sp = Span(15000);
		sp.betterAddNumber(15000);
		std::cout << "Shortest span - " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span - " << sp.longestSpan() << std::endl;

		std::cout << "MAX in array - " << sp.max() <<std::endl;
		std::cout << "MIN in array - " << sp.min() <<std::endl;
		try {
			sp.addNumber(10001);
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}

}