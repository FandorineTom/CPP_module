#pragma once

#include <iostream>
#include <vector>
#include <string>

class Span {
	private:
		std::vector<int>	*_array;
		unsigned int		_n;
	
		Span();

	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();

		Span &operator=(const Span &assign);

		void			addNumber(int n);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		int				max();
		int				min();
		int				nextToMin();
		std::vector<int> *getArray() const;
};