#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	Zombie* Leozombie = zombieHorde(5, "Leo");
	delete [] Leozombie;
	return (0);
}