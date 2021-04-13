#include "mutantstack.hpp"

int main()
{
	std::cout << "\t\t-----------SUBJECT TEST-------\n\n";
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "At the top of the stack now " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size of the stack after pop " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it;
		}
	}
	std::cout << "\n\t\t-----------COMPARISON TESTS-------\n\n";
	{
		MutantStack<int> mstack;
		MutantStack<int> mstack1;
		mstack.push(5);
		mstack.push(17);
		mstack.push(49);
		mstack.push(25);
		mstack.push(48);
		mstack.push(737);
		mstack1.push(48);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		MutantStack<int>::iterator it1 = mstack1.begin();
		while (it != ite) {
			if (it > it1)
				std::cout << "The first is \033[0;33mLARGER\033[0;0m than the second: " << *it  << " and " << *it1 << std::endl;
			if (it < it1)
				std::cout << "The first is \033[0;32mSMALER\033[0;0m than the second: " << *it  << " and " << *it1 << std::endl;
			if (it >= it1)
				std::cout << "The first is larger OR equal than the second: " << *it  << " and " << *it1 << std::endl;
			if (it <= it1)
				std::cout << "The first is smaller OR equal than the second: " << *it  << " and " << *it1 << std::endl;
			++it;
		}
		if (it == ite)
			std::cout << "All done!\n";
	}

	std::cout << "\n\t\t-----------COPY TESTS-------\n\n";
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(49);
		mstack.push(25);
		mstack.push(48);
		mstack.push(737);
		std::stack<int> s(mstack);
		std::cout << "At the top of the stack now " << s.top() << std::endl;
		s.pop();
		std::cout << "At the top of the stack now " << s.top() << std::endl;
		s.pop();
		std::cout << "At the top of the stack now " << s.top() << std::endl;
		s.pop();
		std::cout << "At the top of the stack now " << s.top() << std::endl;
		s.pop();
		std::cout << "At the top of the stack now " << s.top() << std::endl;
	}

	std::cout << "\n\t\t-----------ASSIGN TESTS-------\n\n";
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(49);
		mstack.push(25);
		mstack.push(48);
		mstack.push(737);
		std::stack<int> s;
		s = mstack;
		std::cout << "At the top of the stack now " << s.top() << std::endl;
		s.pop();
		std::cout << "At the top of the stack now " << s.top() << std::endl;
		s.pop();
		std::cout << "At the top of the stack now " << s.top() << std::endl;
		s.pop();
		std::cout << "At the top of the stack now " << s.top() << std::endl;
		s.pop();
		std::cout << "At the top of the stack now " << s.top() << std::endl;
	}
	return 0;
}
