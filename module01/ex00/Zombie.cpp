#include "zombie.hpp"

void	Zombie::Zombie (std::string str) {

	this->set_name(str);
}

void	Zombie::~Zombie (void) {

	return;
}

void	Zombie::announce (void) {

	std::cout << this->get_name() << std::endl;
}

