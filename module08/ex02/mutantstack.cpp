#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &copy) : std::stack<T>(copy.c) {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &assign) {
	this->c = assign.c;
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return typename MutantStack<T>::iterator(&this->top() - (this->size() - 1));
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return typename MutantStack<T>::iterator(&this->top() + 1);
}


template<typename T>
MutantStack<T>::iterator::iterator(T *ptr) : _ptr(ptr) {}

template<typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator=(const iterator &assign) {
	if (this == &assign)
		return *this;
	*_ptr = assign.getT();
	return *this;
}

template<typename T>
MutantStack<T>::iterator::~iterator() {}

template<typename T>
T		*MutantStack<T>::iterator::getT() const {return _ptr;}

template<typename T>
bool	MutantStack<T>::iterator::operator==(iterator const &it) const {return _ptr == it._ptr;}
template<typename T>
bool	MutantStack<T>::iterator::operator!=(iterator const &it) const {return _ptr != it._ptr;}
template<typename T>
bool	MutantStack<T>::iterator::operator>=(iterator const &it) const {return *_ptr >= *it._ptr;}
template<typename T>
bool	MutantStack<T>::iterator::operator<=(iterator const &it) const {return *_ptr <= *it._ptr;}
template<typename T>
bool	MutantStack<T>::iterator::operator<(iterator const &it) const {return *_ptr < *it._ptr;}
template<typename T>
bool	MutantStack<T>::iterator::operator>(iterator const &it) const {return *_ptr > *it._ptr;}
template<typename T>
T		&MutantStack<T>::iterator::operator*() const {return *_ptr;}

template<typename T>
typename MutantStack<T>::iterator	&MutantStack<T>::iterator::operator++() {
	++_ptr;
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator	&MutantStack<T>::iterator::operator--() {
	--_ptr;
	return *this;
}
