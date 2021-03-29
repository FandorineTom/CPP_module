#include "phonebook.class.hpp"

int		main(void)
{
	Phonebook	my_phonebook;
	std::string	line;
	int			i = -1;
	int			flag = 0;

	while (1)
	{
		std::cout << "Enter your command: ";
		getline(std::cin, line);
		if (line == "ADD") {
			my_phonebook.add();
		}
		else if (line == "SEARCH") {
			my_phonebook.print();
			flag = 0;
			while (!flag) {
				std::cout << "Enter the index of a contact you want to see: ";
				std::cin >> i;
				if (!std::cin || i < 0 || i >= 8) {
					std::cout << "\tWrong index. It should be an int >= 0 && < 8" << std::endl;
					std::cin.clear();
					while (std::cin.get() != '\n');
				}
				else {
					std::cin.ignore();
					flag = 1;
				}
			}
			my_phonebook.get_contact(i).print_contact();
		}
		else if (line == "EXIT")
			exit(0);
		else
			std::cerr << "\tWrong command! You can only use ADD, SEARCH or EXIT" << std::endl;
		line.clear();
	}
}