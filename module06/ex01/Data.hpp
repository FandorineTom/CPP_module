#pragma once

#include <string>
#include <iostream>

struct	Data {
	std::string _s1;
	int			_n;
	std::string	_s2;
};

void *serialize(void);
Data *deserialize(void *raw);