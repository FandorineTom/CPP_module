#pragma once

#include <iostream>

template<typename T, typename T1>
void	iter(T *array, T1 length, void (*f)(T const &element)) {
	for (T1 i = 0; i < length; i++) {
		(*f)(array[i]);
	}
}