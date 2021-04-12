#include "span.hpp"

int main()
{
	srand(time(0));
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		// std::cout << sp.getArray()->size() << std::endl;
	}
	{
		Span sp = Span(10000);
		for (int i = 0; i < 10000; i++)
			sp.addNumber(rand());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << sp.max() <<std::endl;
		std::cout << sp.min() <<std::endl;
		std::cout << sp.nextToMin() <<std::endl;
		try {
			sp.addNumber(10001);
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}

}