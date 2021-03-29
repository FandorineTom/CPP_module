#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::Zombie(const std::string &zombie_name, const std::string &zombie_type){
	_name = zombie_name;
	_type = zombie_type;
}

std::string Zombie::get_name() const {
	return (_name);
}

std::string Zombie::get_type() const {
	return (_type);
}

void		Zombie::announce() const {
	std::cout << get_name() << " (" << get_type() << ")" << " Braiiiiiiinnnssss..." << std::endl;
}

void		Zombie::randomChump() {
	std::string names[10] = {
		"Marcel",
		"Brat",
		"Matt",
		"Uve",
		"Rachel",
		"Monica",
		"Ross",
		"Joey",
		"Phoebe",
		"Chandler"
	};
	_name = names[rand() % 10];
	_type = "bully";
}

Zombie::~Zombie(void) {
}