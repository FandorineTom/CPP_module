#include "Scalar.hpp"
#include <iomanip>

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string literal = argv[1];
		Scalar convert(argv[1]);

		try {
			std::cout << "char : " << convert.convertChar() << std::endl;
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
		try {
			std::cout << "int : ";
			int i = 0.;
			i = convert.convertInt();
			std::cout << i << std::endl;
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
		try {
			std::cout << "float : ";
			float f = 0.0f;
			f = convert.convertFloat();
			std::cout << std::fixed << std::setprecision(1) << f << (convert.getIsInf() ? "\n" : "f\n");
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
		try {
			std::cout << "double : ";
			double d = 0.0;
			d = convert.convertDouble();
			std::cout << std::fixed << std::setprecision(1) << d << std::endl;
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
}