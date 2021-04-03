#include "Fixed.class.hpp"

Fixed::Fixed() : _fixed_point_value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy_fixed) {
	std::cout << "Copy constructor called\n";
	this->_fixed_point_value = copy_fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &to_assign) {
	std::cout << "Assignation operator called\n";
	_fixed_point_value = to_assign.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (_fixed_point_value);
}

void Fixed::setRawBits(int const value) {
	std::cout << "setRawBits member function called\n";
	_fixed_point_value = value;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}