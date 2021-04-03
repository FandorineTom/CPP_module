#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_fixed_point_value;
		static const int	_num_frac_bits = 8;

	public:
		Fixed();
		Fixed(const int new_int_value);
		Fixed(const float new_float_value);
		Fixed(const Fixed &copy_fixed);
		~Fixed();

		Fixed&	operator=(const Fixed &to_assign);

		int		getRawBits(void) const;
		void	setRawBits(int const value);
		float	toFloat(void) const;
		int		toInt(void) const;
	
};

std::ostream &operator<<(std::ostream &s, const Fixed &fixed);

#endif