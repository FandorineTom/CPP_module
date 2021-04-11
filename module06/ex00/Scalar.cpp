#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(const char *literal) : _literal(literal), endptr(NULL), _value(0), _error(false),
									_isNan(false), _isInf(false)
{
	if (isprint(_literal[0]) && !isdigit(_literal[0]) && !_literal[1])
		_value = _literal[0];
	else {
		_value = strtod(_literal, &endptr);
		if (errno || *endptr)
			_error = true;
	}
	if (std::isnan(_value))
		_isNan = true;
	if (std::isinf(_value))
		_isInf = true;
}

Scalar::Scalar(const Scalar &copy) {(void)copy;}
Scalar::~Scalar() {}
Scalar &Scalar::operator=(const Scalar &assign) {
	(void)assign;
	return *this;
}

char	Scalar::convertChar() {
	if (_error || _isInf || _isNan || _value < -128 || _value > 127)
		throw std::invalid_argument("impossible");
	char	res = static_cast<char>(_value);
	if (!isprint(res))
		throw std::invalid_argument("Non displayable");
	return res;
}

int		Scalar::convertInt() {
	if (_error || _isNan || _isInf || std::numeric_limits<int>::max() < _value\
		|| std::numeric_limits<int>::min() > _value)
		throw std::invalid_argument("impossible");
	return static_cast<int>(_value);
}

float	Scalar::convertFloat() {
	if (_error || (std::numeric_limits<float>::max() < _value && !_isInf)\
		|| (std::numeric_limits<float>::lowest() > _value && !_isInf))
		throw std::invalid_argument("impossible");
	return static_cast<float>(_value);
}

double	Scalar::convertDouble() {
	if (_error)
		throw std::invalid_argument("impossible");
	return _value;
}

bool	Scalar::getIsInf() {return _isInf;}
