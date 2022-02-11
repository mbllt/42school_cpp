#include <iostream>
#include <string>
#include "Array.hpp"

class Lol {
	public :
		std::string _name;
		Lol() : _name("Pegase") {}
};

std::ostream	& operator<<(std::ostream & o, Lol const & src) {
	o << src._name;
	return o;
}

template<typename T>
void	displayArray(Array<T> const & arr) {
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";
}

void	incrementArray(Array<int> & arr) {
	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i]++;
}

int	main(void) {

	Array<int>	src(5);
	for (unsigned int i = 0; i < src.size(); i++)
		src[i] = i;
	std::cout << "src :" << "\n";
	displayArray(src);

	std::cout << "\n-----------------\n" << std::endl;

	std::cout << "dest copy of src :" << "\n";
	Array<int>	dest(src);
	displayArray(dest);

	std::cout << "\n-----------------\n" << std::endl;

	std::cout << "change src[0]" << "\n";
	src[0] = 10;
	std::cout << "src :" << "\n";
	displayArray(src);

	std::cout << "\n-----------------\n" << std::endl;

	std::cout << "dest :" << "\n";
	displayArray(dest);

	std::cout << "\n-----------------\n" << std::endl;

	std::cout << "Incrementing src" << "\n";
	incrementArray(src);
	displayArray(src);

	std::cout << "\n-----------------\n" << std::endl;

	std::cout << "Array works with every type" << "\n";
	Array<Lol>	test(3);
	displayArray(test);

	std::cout << "\n-----------------\n" << std::endl;

	std::cout << "error invalid index" << "\n";
	try {
		dest[50] = 2;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}