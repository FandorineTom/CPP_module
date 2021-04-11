#include "Funcs.hpp"

class	Awesome {
	private:
		int		_n;
	public:
		Awesome(int n) : _n(n) {}
		~Awesome() {}

		bool	operator>(Awesome const &rhs) const {return (_n > rhs._n);}
		bool	operator>=(Awesome const &rhs) const {return (_n > rhs._n);}
		bool	operator<(Awesome const &rhs) const {return (_n > rhs._n);}
		bool	operator<=(Awesome const &rhs) const {return (_n > rhs._n);}
		bool	operator==(Awesome const &rhs) const {return (_n > rhs._n);}
		bool	operator!=(Awesome const &rhs) const {return (_n > rhs._n);}
		int		getInt() const {return _n;}

};

std::ostream &operator<<(std::ostream &s, const Awesome &Awesome) {
	s << Awesome.getInt();
	return s;
}

int		main()
{
	std::cout << "\t\t-------SUBJECT TESTS-------------\n\n";
	int a = 2;
	int b = 3;
	_swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << _min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << _max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	_swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << _min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << _max( c, d ) << std::endl;

	std::cout << "\n\t\t-------INT TESTS-------------\n\n";
	{
		int a = 145;
		int	b = 86;

		std::cout << "The parametrs are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";
		std::cout << "The \033[0;31mMIN\033[0;0m between a and b is \033[0;33m" << _min(a, b) << "\033[0;0m\n";
		std::cout << "The \033[0;31mMAX\033[0;0m between a and b is \033[0;34m" << _max(a, b) << "\033[0;0m\n";
		_swap(a, b);
		std::cout << "The parametrs after \033[0;31mSWAP\033[0;0m are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";

	}

	std::cout << "\n\t\t-------CHAR TESTS-------------\n\n";
	{
		char	a = 'P';
		char	b = 'A';

		std::cout << "The parametrs are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";
		std::cout << "The \033[0;31mMIN\033[0;0m between a and b is \033[0;33m" << _min(a, b) << "\033[0;0m\n";
		std::cout << "The \033[0;31mMAX\033[0;0m between a and b is \033[0;34m" << _max(a, b) << "\033[0;0m\n";
		_swap(a, b);
		std::cout << "The parametrs after \033[0;31mSWAP\033[0;0m are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";
	}

	std::cout << "\n\t\t-------STRING TESTS-------------\n\n";
	{
		std::string	a = "Deadline";
		std::string	b = "Here";

		std::cout << "The parametrs are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";
		std::cout << "The \033[0;31mMIN\033[0;0m between a and b is \033[0;33m" << _min(a, b) << "\033[0;0m\n";
		std::cout << "The \033[0;31mMAX\033[0;0m between a and b is \033[0;34m" << _max(a, b) << "\033[0;0m\n";
		_swap(a, b);
		std::cout << "The parametrs after \033[0;31mSWAP\033[0;0m are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";
	}

	std::cout << "\n\t\t-------DOUBLE TESTS-------------\n\n";
	{
		double	a = 42;
		double	b = 21;

		std::cout << "The parametrs are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";
		std::cout << "The \033[0;31mMIN\033[0;0m between a and b is \033[0;33m" << _min(a, b) << "\033[0;0m\n";
		std::cout << "The \033[0;31mMAX\033[0;0m between a and b is \033[0;34m" << _max(a, b) << "\033[0;0m\n";
		_swap(a, b);
		std::cout << "The parametrs after \033[0;31mSWAP\033[0;0m are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";
	}

	std::cout << "\n\t\t-------MY_OWN_CLASS TESTS-------------\n\n";
	{
		Awesome a(39);
		Awesome	b(25);

		std::cout << "The parametrs are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";
		std::cout << "The \033[0;31mMIN\033[0;0m between a and b is \033[0;33m" << _min(a, b) << "\033[0;0m\n";
		std::cout << "The \033[0;31mMAX\033[0;0m between a and b is \033[0;34m" << _max(a, b) << "\033[0;0m\n";
		_swap(a, b);
		std::cout << "The parametrs after \033[0;31mSWAP\033[0;0m are:\na = \033[0;32m" << a << "\033[0;0m\nb = \033[0;32m" << b << "\033[0;0m\n";
	}
}