#include <iostream>
#include <string>
#include "Array.hpp"

void	displayArray(Array<int> const & arr) {
	for (unsigned int i = 0; i < arr.size(); i++)
		arr.display(i);
	std::cout << "\n";
}

int	main(void) {

	Array<int>	src(5);
	for (unsigned int i = 0; i < src.size(); i++)
		src[i] = i;
	std::cout << "src :" << "\n";
	displayArray(src);

	std::cout << "dest copy of src :" << "\n";
	Array<int>	dest(src);
	displayArray(dest);

	std::cout << "change src[0]" << "\n";
	src[0] = 10;
	std::cout << "src :" << "\n";
	displayArray(src);
	std::cout << "dest :" << "\n";
	displayArray(dest);
	return 0;
}