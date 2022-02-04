#include "Karen.hpp"

//	switch - tableau de pointeur sur fonction

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string level = argv[1];
		Karen customer;

		customer.logLevel(level);
	}

	return (0);
}

