#include <iostream>
#include <string>
#include <algorithm>
#include "MutantStack.hpp"

//	for_each 98 prend en param un struct ou il faut overload() -> doc

template<typename T>
struct DisplayT {
	void operator()(T & type) {
		std::cout << type << " ";
	}
};

int	main(void) {
	MutantStack<int> src;

	src.push(5);
	src.push(17);

	std::cout << "top element : ";
	std::cout << src.top() << std::endl;

	src.pop();

	std::cout << "size : ";
	std::cout << src.size() << std::endl;

	src.push(3);
	src.push(5);
	src.push(737);
	src.push(-9);

	std::cout << "\n---------------\n" << std::endl;
	std::cout << "test check iterator mutant marche" << std::endl;
	MutantStack<int>::iterator it = src.begin();
	MutantStack<int>::iterator ite = src.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout << "\n---------------\n" << std::endl;
	std::cout << "test copy src dans dest" << std::endl;
	MutantStack<int> dest(src);
	std::cout << "dest : ";
	std::for_each(dest.begin(), dest.end(), DisplayT<int>());
	std::cout << std::endl;

	std::cout << "\n---------------\n" << std::endl;
	std::cout << "test src modifié, check dest" << std::endl;
	src.pop();

	std::cout << "src : ";
	std::for_each(src.begin(), src.end(), DisplayT<int>());
	std::cout << std::endl;

	std::cout << "dest : ";
	std::for_each(dest.begin(), dest.end(), DisplayT<int>());
	std::cout << std::endl;

	std::cout << "\n---------------\n" << std::endl;
	std::cout << "test dest = src" << std::endl;
	dest = src;
	std::cout << "src : ";
	std::for_each(src.begin(), src.end(), DisplayT<int>());
	std::cout << std::endl;

	std::cout << "dest : ";
	std::for_each(dest.begin(), dest.end(), DisplayT<int>());
	std::cout << std::endl;
	return 0;
}