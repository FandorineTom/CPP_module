#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
	private:
		int					_fixed_point_value;
		static const int	_num_frac_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &copy_fixed);
		~Fixed();

		Fixed&	operator=(const Fixed &to_assign);

		int		getRawBits(void) const;
		void	setRawBits(int const value);
	
};

#endif