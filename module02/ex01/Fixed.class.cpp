#include "Fixed.class.hpp"

Fixed::Fixed() : _fixed_point_value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy_fixed) {
	std::cout << "Copy constructor called\n";
	*this = copy_fixed;
}

Fixed &Fixed::operator=(const Fixed &to_assign) {
	std::cout << "Assignation operator called\n";
	_fixed_point_value = to_assign._fixed_point_value;
	return (*this);
}

Fixed::Fixed(const int new_int_value) {
	std::cout << "Int constructor called\n";
	_fixed_point_value = new_int_value * (1 << _num_frac_bits);
}

Fixed::Fixed(const float new_float_value) {
	std::cout << "Float constructor called\n";
	_fixed_point_value = roundf(new_float_value * (1 << _num_frac_bits));
}

int		Fixed::getRawBits(void) const {
	return (_fixed_point_value);
}

void	Fixed::setRawBits(int const value) {
	_fixed_point_value = value;
}

int		Fixed::toInt(void) const {
	return (_fixed_point_value / (1 << _num_frac_bits));
}

float	Fixed::toFloat(void) const {
	return ((float)_fixed_point_value / (1 << _num_frac_bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

std::ostream &operator<<(std::ostream &s, const Fixed &fixed) {
	s << fixed.toFloat();
	return (s);
}