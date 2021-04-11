#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*createA() {
	return new A;
}

Base	*createB() {
	return new B;
}

Base	*createC() {
	return new C;
}

Base *generate(void)
{
	srand(time(0));
	Base *(*funcs[3])() = {createA, createB, createC};

	Base *to_ret = funcs[rand() % 3]();
	return to_ret;
}

void	identify_from_pointer(Base *ptr)
{
	A *a = dynamic_cast<A *>(ptr);
	B *b = dynamic_cast<B *>(ptr);
	C *c = dynamic_cast<C *>(ptr);

	if (a)
		std::cout << "Identification from pointer: \033[0;32mA\033[0;0m\n";
	else if (b)
		std::cout << "Identification from pointer: \033[0;32mB\033[0;0m\n";
	else if (c)
		std::cout << "Identification from pointer: \033[0;32mC\033[0;0m\n";
}

void	identify_from_reference(Base &ref)
{
	try {
		A &a = dynamic_cast<A &>(ref);
		(void)a;
		std::cout << "Identification from reference: \033[0;34mA\033[0;0m\n";
	}
	catch (std::bad_cast &ex) {}
	try {
		B &b = dynamic_cast<B &>(ref);
		(void)b;
		std::cout << "Identification from reference: \033[0;34mB\033[0;0m\n";
	}
	catch (std::bad_cast &ex) {}
	try {
		C &c = dynamic_cast<C &>(ref);
		(void)c;
		std::cout << "Identification from reference: \033[0;34mC\033[0;0m\n";
	}
	catch (std::bad_cast &ex) {}
}

int		main()
{
	Base *base = generate();

	std::cout << "Type generated is \033[0;33m" << base->_type << "\033[0;0m\n";

	identify_from_pointer(base);
	identify_from_reference(*base);
}