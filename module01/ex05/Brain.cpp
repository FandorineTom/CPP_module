#include "Brain.hpp"

Brain::Brain(){
	_size = "big";
}

std::string	Brain::identify() const {
	std::stringstream address;
	address << this;
	return (address.str());
}

std::string	Brain::getSyze() const {
	return (_size);
}

Brain::~Brain(){
}