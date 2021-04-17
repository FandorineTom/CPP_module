#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

class Span {
	private:
		std::vector<int>	_array;
		unsigned int		_n;
		std::vector<int>	_spans;
	
		Span();

	public:
		Span(unsigned n);
		Span(const Span &copy);
		~Span();

		Span &operator=(const Span &assign);

		void			addNumber(int n);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			betterAddNumber(std::vector<int>);
		void			writeSpans();

		int				max();
		int				min();
		std::vector<int> getArray() const;
};