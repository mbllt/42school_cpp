#include "Zombie.hpp"

Zombie*	newZombie (std::string name) {

	Zombie* pseudo = new Zombie(name);
	// pseudo->announce();
	return pseudo;
} 