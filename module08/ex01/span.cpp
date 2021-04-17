#include "span.hpp"

Span::Span() {}
Span::Span(unsigned int n) : _array(std::vector<int>()), _n(n) {}
Span::Span(const Span &copy) {*this = copy;}
Span &Span::operator=(const Span &assign) {
	_array = assign._array;
	_spans = assign._spans;
	_n = assign._n;
	return *this;
}
Span::~Span() {}

void	Span::addNumber(int n) {
	if (_array.size() == _n)
		throw std::out_of_range("\033[0;31mThe array is already full, can't add any more elemets\033[0;0m");
	std::vector<int>::iterator i;
	i = std::find(_array.begin(), _array.end(), n);
	if (i != _array.end())
		throw std::out_of_range("\033[0;31mThe element is already in set\033[0;0m");
	_array.push_back(n);
}

void Span::writeSpans() {
	_spans.resize(_array.size());
	std::sort(_array.begin(), _array.end());
	std::adjacent_difference(_array.begin(), _array.end(), _spans.begin());
}

unsigned int	Span::longestSpan() {
	if (_array.empty() || _array.size() == 1)
		throw std::out_of_range("\033[0;31mThe array is empty or has only one element, cannot find the span\033[0;0m");
	std::sort(_array.begin(), _array.end());
	return *_array.rbegin() - *_array.begin();
}

unsigned int	Span::shortestSpan() {
	if (_array.empty() || _array.size() == 1)
		throw std::out_of_range("\033[0;31mThe array is empty or has only one element, cannot find the span\033[0;0m");
	writeSpans();
	std::sort(_spans.begin(), _spans.end());
	return *_spans.begin();
}

void			Span::betterAddNumber(std::vector<int> sp) {
	if ((_array.size() + sp.size()) > _n)
		throw std::out_of_range("\033[0;31mThe array is already full, can't add any more elemets\033[0;0m");
	if (_array.size()) {
		unsigned int size = sp.size() > _array.size() ? _array.size() : sp.size();
		for (unsigned int i = 0; i < size; i++) {
			if (std::find(sp.begin(), sp.end(), _array[i]) != _array.end())
				throw std::out_of_range("\033[0;31mThe element is already in set\033[0;0m");
		}
	}
	_array.insert(_array.end(), sp.begin(), sp.end());
}

int				Span::max() {
	std::sort(_array.begin(), _array.end());
	return *_array.rbegin();
}
int				Span::min() {
	std::sort(_array.begin(), _array.end());
	return _array.at(0);
}
std::vector<int> Span::getArray()const {return _array;}