#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main()
{

	Zombie*	bob = newZombie("Bob");
	bob->announce();
	randomChump("Claire");
	delete bob;
	return (0);
}