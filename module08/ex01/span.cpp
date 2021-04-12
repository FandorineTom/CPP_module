#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int n) {
	_array = new std::vector<int>;
	_n = n;
}

Span::Span(const Span &copy) {*this = copy;}

Span &Span::operator=(const Span &assign) {
	if (_array)
		delete _array;
	_array = new std::vector<int>(assign._array->size());
	for (std::vector<int>::size_type i = 0; i < _array->size(); i++)
		_array->push_back(assign._array->at(i));
	return *this;
}

Span::~Span() {delete _array;}

void	Span::addNumber(int n) {
	if (_array->size() == _n)
		throw std::out_of_range("The array is already full, can't add any more elemets");
	std::vector<int>::iterator i;
	i = std::find(_array->begin(), _array->end(), n);
	if (i != _array->end())
		throw std::out_of_range("The element is already in set");
	_array->push_back(n);
}

unsigned int	Span::longestSpan() {
	std::sort(_array->begin(), _array->end());
	return _array->at(_array->size() - 1) - _array->at(0);
}

unsigned int	Span::shortestSpan() {
	std::sort(_array->begin(), _array->end());
	return _array->at(1) - _array->at(0);
}

int				Span::max() {
	std::sort(_array->begin(), _array->end());
	return _array->at(_array->size() - 1);
}
int				Span::min() {
	std::sort(_array->begin(), _array->end());
	return _array->at(0);
}
int				Span::nextToMin() {
	std::sort(_array->begin(), _array->end());
	return _array->at(1);
}
std::vector<int> *Span::getArray()const {return _array;}