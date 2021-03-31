#include <iostream>
#include <string>
#include <fstream>

void	replace(const std::string &find, const std::string &rep, std::ifstream &in, std::ofstream &out)
{
	std::string data;
	while (in >> data)
	{
		std::size_t found = data.find(find);
		while (found != std::string::npos)
		{
			found = data.find(find);
			if (found != std::string::npos)
			{
				std::size_t len;
				if (rep.length() < find.length())
					len = find.length();
				else
					len = find.length();
				data.replace(found, len, rep);
			}
		}
		out << data << std::endl;
	}
}

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
	std::ifstream original_file;
	original_file.open(argv[1]);
	if (!original_file.is_open())
	{
		std::cout << "Cannot open the file\n";
		return (1);
	}
	std::ofstream my_file;
	std::string name = argv[1];
	my_file.open(name + ".replace", std::ios::out | std::ios::trunc);
	if (!my_file.is_open())
	{
		std::cout << "Cannot open the file\n";
		return (1);
	}
	replace(s1, s2, original_file, my_file);
	original_file.close();
	my_file.close();
	return(0);
}
