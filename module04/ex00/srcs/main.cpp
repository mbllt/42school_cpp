#include "main.hpp"

int	main(void) {

	Animal Serpent;
	Dog Tribord;
	Cat Shrimpy;
	std::cout << "\n";

	std::cout << "Serpent's type : " << Serpent.getType() << std::endl;
	std::cout << "Tribord's type : " << Tribord.getType() << std::endl;
	std::cout << "Shrimpy's type : " << Shrimpy.getType() << std::endl;
	std::cout << "\n";

	Animal Anaconda(Serpent);
	Cat Garfilde = Shrimpy;
	std::cout << "\n";

	std::cout << "Garfilde's type : " << Garfilde.getType() << std::endl;
	std::cout << "Anaconda's type : " << Anaconda.getType() << std::endl;
	std::cout << "\n";

	return (0);
}
