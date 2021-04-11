#include "Data.hpp"

int		main()
{
	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << "First string: " << data->_s1 << std::endl;
	std::cout << "Num: " << data->_n << std::endl;
	std::cout << "Second string: " << data->_s2 << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 24; i++)
		std::cout << reinterpret_cast<char *>(raw)[i];
	std::cout << std::endl;
	
	std::cout << reinterpret_cast<int *>(raw)[6] << std::endl;

	for (int i = 28; i < 52; i++)
		std::cout << reinterpret_cast<char *>(raw)[i];
	std::cout << std::endl;

	delete[] reinterpret_cast<char *>(raw);
	delete data;
}