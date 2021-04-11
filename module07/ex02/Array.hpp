#pragma once

#include <iostream>

template<typename T>
class Array {
	private:
		int		_n;
		T 		*_array;

	public:
		Array() : _n(0), _array(new T[0]) {}
		Array(unsigned int n) : _n(n), _array(new T[n]) {}
		Array(Array<T> const &copy) : _array(NULL) {*this = copy;}
		~Array() {delete[] _array;}

		Array<T> &operator=(const Array<T> &assign) {
			if (_array)
				delete[] _array;
			_n = assign._n;
			_array = new T[_n];
			for (int i = 0; i < _n; i++) {
				_array[i] = assign._array[i];
			}
			return *this;
		}
		T &operator[](int i) {
			if (i >= _n)
				throw std::exception();
			return _array[i];
		}

		int		size() {return _n;}

};