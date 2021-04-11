#include "Array.hpp"

template<typename T>
void	print(T &arr, int n) {
	int i;
	for (i = 0; i < n - 1; i++)
		std::cout << arr[i] << ", ";
	std::cout << arr[i] << std::endl;
}

int		main()
{
	std::cout << "\t\t---------COPY TEST-----------\n\n";
	Array<int> toCopy(15);
	for (int i = 0; i < 15; i++)
		toCopy[i] = i + 1;
	std::cout << "The size of the first \033[0;31mINT\033[0;0m array is " << toCopy.size() << std::endl;
	print(toCopy, 15);

	Array<int> theCopy(toCopy);
	std::cout << "The size of the copied \033[0;31mINT\033[0;0m array is " << theCopy.size() << std::endl;
	print(theCopy, 15);
	for (int i = 0; i < 15; i++)
		toCopy[i] = i * 2;
	std::cout << "The \033[0;31mFIRST\033[0;0m array after some changes: ";
	print(toCopy, 15);
	std::cout << "The \033[0;31mCOPY\033[0;0m array after some changes: ";
	print(theCopy, 15);

	std::cout << "\n\t\t---------ASSIGN TEST-----------\n\n";

	theCopy = toCopy;
	std::cout << "The \033[0;31mFIRST\033[0;0m array: ";
	print(toCopy, 15);
	std::cout << "The \033[0;31mASSIGN\033[0;0m array: ";
	print(theCopy, 15);
	for (int i = 0; i < 15; i++)
		toCopy[i] = i * 10;
	std::cout << "The \033[0;31mFIRST\033[0;0m array after some changes: ";
	print(toCopy, 15);
	std::cout << "The \033[0;31mASSIGN\033[0;0m array after some changes: ";
	print(theCopy, 15);

	std::cout << "\n\t\t---------EMPTY ARRAY-----------\n\n";
	Array<int> empty;
	std::cout << "The size of an \033[0;31mEMPTY\033[0;0m array is " << empty.size() << std::endl;
	
	std::cout << "\n\t\t---------INT ARRAY-----------\n\n";
	Array<int> a(15);
	std::cout << "The size of an \033[0;31mINT\033[0;0m array is " << a.size() << std::endl;
	for (int i = 0; i < 15; i++)
		a[i] = i + 1;
	print(a, 15);

	std::cout << "\n\t\t---------DOUBLE ARRAY-----------\n\n";
	Array<double> b(20);
	std::cout << "The size of a \033[0;31mDOUBLE\033[0;0m array is " << b.size() << std::endl;
	for (int i = 0; i < 20; i++)
		b[i] = i + 1;
	print(b, 20);

	std::cout << "\n\t\t---------STRING ARRAY-----------\n\n";
	Array<std::string> c(10);
	std::string words[10] = {"our", "deepest", "fear", "is", "that", "we", "are", "powerfull", "beyond", "measure"};
	std::cout << "The size of a \033[0;31mSTRING\033[0;0m array is " << c.size() << std::endl;
	for (int i = 0; i < 10; i++)
		c[i] = words[i];
	print(c, 10);

	std::cout << "\n\t\t---------EXCEPTION-----------\n\n";
	try {
		Array<int> d(10);
		for (int i = 0; i < 10; i++)
			d[i] = i;
		std::cout << "The original array is: ";
		print(d, 10);
		d[5] = 1000;
		std::cout << "The array after changing 5th element to 1000 is: ";
		print(d, 10);
		d[10] = 100;
	}
	catch (std::exception) {
		std::cout << "\033[0;31mThe element is out of the limits\033[0;0m\n";
	}
}