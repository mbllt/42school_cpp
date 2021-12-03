#include "main.hpp"

int	main(void) {

	Animal animal("Animal");
	Dog Tribord("Tribord");
	Cat Shrimpy("Shrimpy");
	std::cout << "\n";

	std::cout << "Animal's name : " << animal.getName() << std::endl;
	std::cout << "Tribord's name : " << Tribord.getName() << std::endl;
	std::cout << "Shrimpy's name : " << Shrimpy.getName() << std::endl;
	std::cout << "\n";

	Cat Garfilde = Shrimpy;
	std::cout << "\n";

	std::cout << "Garfilde's name : " << Garfilde.getName() << std::endl;
	return (0);
}
