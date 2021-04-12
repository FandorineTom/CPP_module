#include "easyfind.hpp"
#include <vector>
#include <set>
#include <list>

template<typename T>
void	print_it(const T &container, typename T::iterator iterator) {
	if (iterator != container.end())
		std::cout << "Found the element: " << *iterator << std::endl;
}

template<typename T>
void	print(const T &container) {
	std::cout << "The original container: ";
	for (typename T::size_type i = 0; i < container.size(); i++)
		std::cout << container[i] << " ";
	std::cout << std::endl;
}

int		main()
{

	std::cout << "\t\t----------VECTOR TEST--------\n\n";
	{
		std::vector<int> vector;
		std::vector<int>::iterator iterator;
		for (int i = 0; i < 50; i++)
			vector.push_back(i + 1);
		try {
			print(vector);
			iterator = easyfind(vector, 23);
			print_it(vector, iterator);
		}
		catch (std::exception &ex) {
			std::cout << ex.what();
	}
	}

	std::cout << "\n\t\t----------NOT FOUND VECTOR TEST--------\n\n";
	{
		std::vector<int> vector;
		std::vector<int>::iterator iterator;
		for (int i = 0; i < 25; i++)
			vector.push_back(i * 10);
		try {
			print(vector);
			iterator = easyfind(vector, 15);
			print_it(vector, iterator);
		}
		catch (std::exception &ex) {
			std::cout << ex.what();
		}
	}

	std::cout << "\n\t\t----------SET TEST--------\n\n";
	{
		std::vector<int> vector;
		for (int i = 0; i < 25; i++)
			vector.push_back(i * 10);
		std::set<int> set_container(vector.begin(), vector.end());
		std::set<int>::iterator iterator;
		try {
			print(vector);
			iterator = easyfind(set_container, 230);
			print_it(set_container, iterator);
		}
		catch (std::exception &ex) {
			std::cout << ex.what();
		}
	}

	std::cout << "\n\t\t----------NOT FOUND SET TEST--------\n\n";
	{
		std::vector<int> vector;
		for (int i = 0; i < 25; i++)
			vector.push_back(i * 10);
		std::set<int> set_container(vector.begin(), vector.end());
		std::set<int>::iterator iterator;
		try {
			print(vector);
			iterator = easyfind(set_container, 25);
			print_it(set_container, iterator);
		}
		catch (std::exception &ex) {
			std::cout << ex.what();
		}
	}

	std::cout << "\n\t\t----------LIST TEST--------\n\n";
	{
		std::vector<int> vector;
		for (int i = 0; i < 25; i++)
			vector.push_back(i * 10);
		std::list<int> list_container(vector.begin(), vector.end());
		std::list<int>::iterator iterator;
		try {
			print(vector);
			iterator = easyfind(list_container, 40);
			print_it(list_container, iterator);
		}
		catch (std::exception &ex) {
			std::cout << ex.what();
		}
	}

	std::cout << "\n\t\t----------NOT FOUND LIST TEST--------\n\n";
	{
		std::vector<int> vector;
		for (int i = 0; i < 25; i++)
			vector.push_back(i * 10);
		std::set<int> set_container(vector.begin(), vector.end());
		std::set<int>::iterator iterator;
		try {
			print(vector);
			iterator = easyfind(set_container, 224);
			print_it(set_container, iterator);
		}
		catch (std::exception &ex) {
			std::cout << ex.what();
		}
	}
}