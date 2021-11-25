#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie* pseudo = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		pseudo[i].set_name(name); 
	}
	return pseudo;
} 