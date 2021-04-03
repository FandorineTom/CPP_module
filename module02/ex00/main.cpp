#include "Fixed.class.hpp"

int		main(void) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	// Fixed d;
	// d.setRawBits(5);
	// std::cout << d.getRawBits() << std::endl;
	return 0;
}