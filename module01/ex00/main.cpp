#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony *my_pony = new Pony;

	std::cout << "What will the pony's NICKNAME be: ";
	getline(std::cin, my_pony->nick);
	std::cout << "What will the pony's COLOR be: ";
	getline(std::cin, my_pony->color);

	std::cout << "\tPony's NICKNAME is " << my_pony->nick << std::endl;
	std::cout << "\tPony's COLOR is " << my_pony->color << std::endl;
	delete my_pony;
}

void	ponyOnTheStack(void) {
	Pony my_pony;

	std::cout << "What will the pony's NICKNAME be: ";
	getline(std::cin, my_pony.nick);
	std::cout << "What will the pony's COLOR be: ";
	getline(std::cin, my_pony.color);

	std::cout << "\tPony's NICKNAME is " << my_pony.nick << std::endl;
	std::cout << "\tPony's COLOR is " << my_pony.color << std::endl;
}

int		main(void) {

	std::cout << "\t\t|ON THE HEAP ALLOCATION|" << std::endl << std::endl;
	ponyOnTheHeap();

	std::cout << std::endl;
	std::cout << "\t\t|ON THE STACK ALLOCATION|" << std::endl << std::endl;

	ponyOnTheStack();
}