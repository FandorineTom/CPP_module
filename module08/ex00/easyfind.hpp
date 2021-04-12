#pragma once

#include <iostream>
#include <string>

class	DidNotFindException : public std::exception {
	public:
	virtual char const *what() const throw() {return "\033[0;31mDid not find such Element\033[0;0m\n";}
};

template<typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator i;
	i = std::find(container.begin(), container.end(), value);
	if (i == container.end())
		throw DidNotFindException();
	return i;
}