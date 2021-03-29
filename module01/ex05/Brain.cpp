#include "Brain.hpp"

Brain::Brain(){
}

std::string	Brain::identify() const {
	std::stringstream address;
	address << this;
	return (address.str());
}

Brain::~Brain(){
}