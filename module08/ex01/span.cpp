#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int n) {
	_array = new std::vector<int>;
	_spans = new std::vector<int>;
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

Span::~Span() {
	delete _array;
	delete _spans;
}

void	Span::addNumber(int n) {
	if (_array->size() == _n)
		throw std::out_of_range("\033[0;31mThe array is already full, can't add any more elemets\033[0;0m");
	std::vector<int>::iterator i;
	i = std::find(_array->begin(), _array->end(), n);
	if (i != _array->end())
		throw std::out_of_range("\033[0;31mThe element is already in set\033[0;0m");
	_array->push_back(n);
	writeSpans();
}

void Span::writeSpans() {
	_spans->resize(_array->size());
	std::sort(_array->begin(), _array->end());
	std::adjacent_difference(_array->begin(), _array->end(), _spans->begin());
}

unsigned int	Span::longestSpan() {
	if (_array->size() == 0 || _array->size() == 1)
		throw std::out_of_range("\033[0;31mThe array is empty or has only one element, cannot find the span\033[0;0m");
	std::sort(_array->begin(), _array->end());
	return _array->at(_array->size() - 1) - _array->at(0);
}

unsigned int	Span::shortestSpan() {
	if (_array->size() == 0 || _array->size() == 1)
		throw std::out_of_range("\033[0;31mThe array is empty or has only one element, cannot find the span\033[0;0m");
	std::sort(_spans->begin(), _spans->end());
	return _spans->at(0);
}

void			Span::betterAddNumber(unsigned int n) {
	for (unsigned int i = 0; i < n; i++) {
		_array->push_back(rand());
		writeSpans();
	}
}

int				Span::max() {
	std::sort(_array->begin(), _array->end());
	return _array->at(_array->size() - 1);
}
int				Span::min() {
	std::sort(_array->begin(), _array->end());
	return _array->at(0);
}
std::vector<int> *Span::getArray()const {return _array;}