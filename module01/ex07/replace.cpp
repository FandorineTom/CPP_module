#include <iostream>
#include <string>
#include <fstream>

int     main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Need 3 arguments to operate: file, s1 and s2\n";
		return (1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "The strings cannot be empty\n";
		return (1);
	}
	std::ifstream original_file(argv[1]);
	if (!original_file.is_open())
	{
		std::cout << "Cannot open the file\n";
		return (1);
	}
}
