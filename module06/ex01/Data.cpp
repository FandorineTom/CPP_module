#include "Data.hpp"

void *serialize(void) {
	void	*raw = new char[52]();

	srand(time(0));
	std::string literals("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890");
	int num = static_cast<int>(literals.size());

	for (int i = 0; i < 24; i++)
		reinterpret_cast<char *>(raw)[i] = literals[rand() % num];
	
	reinterpret_cast<int *>(raw)[6] = rand();

	for (int i = 28; i < 52; i++)
		reinterpret_cast<char *>(raw)[i] = literals[rand() % num];

	return raw;
}

Data *deserialize(void *raw) {
	Data *data = new Data;

	data->_s1.assign(reinterpret_cast<char *>(raw), 24);
	data->_s2.assign(reinterpret_cast<char *>(&((char *)raw)[28]), 24);
	data->_n = reinterpret_cast<int *>(raw)[6];
	return data;
}