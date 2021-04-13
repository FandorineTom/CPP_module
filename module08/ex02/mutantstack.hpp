#pragma once

#include <iostream>
#include <stack>
#include <iterator>
#include <string>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack &operator=(const MutantStack &assign);
		virtual ~MutantStack();

		class iterator : public std::iterator<std::input_iterator_tag, T> {
			private:
				T	*_ptr;
			
			public:
				iterator();
				iterator(T *ptr);
				iterator(const iterator &copy);
				iterator &operator=(const iterator &assign);
				~iterator();

				T	*getT() const;
				bool	operator==(const iterator &iterator) const;
				bool	operator!=(const iterator &iterator) const;
				bool	operator>=(const iterator &iterator) const;
				bool	operator<=(const iterator &iterator) const;
				bool	operator<(const iterator &iterator) const;
				bool	operator>(const iterator &iterator) const;

				iterator	&operator++();
				iterator	&operator--();
				T			&operator*() const;
		};

		iterator	begin();
		iterator	end();
};

#include "mutantstack.cpp"