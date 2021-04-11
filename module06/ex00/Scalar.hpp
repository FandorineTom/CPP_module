#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <cmath>

class Scalar {
	private:
		const char	*_literal;
		char		*endptr;
		double 		_value;
		bool		_error;
		bool		_isNan;
		bool		_isInf;

		Scalar();
		Scalar(Scalar const &copy);
		Scalar &operator=(const Scalar &assign);

	public:
		Scalar(const char *literal);
		~Scalar();

		char	convertChar();
		int		convertInt();
		float	convertFloat();
		double	convertDouble();
		bool	getIsInf();
};

std::ostream &operator<<(std::ostream &s, Scalar const &scalar);