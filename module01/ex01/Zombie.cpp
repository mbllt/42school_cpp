#include "Zombie.hpp"
#include <string>

Zombie::Zombie (void) {

	std::cout << "Constructing" << std::endl;
}

Zombie::Zombie (std::string name) :_name(name) {

	std::cout << "Constructing: " << name << std::endl;
}

Zombie::~Zombie (void) {

	std::cout << "Destructing : " << _name << std::endl;
}

void	Zombie::announce (void) {

	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name (std::string name) {

	_name = name;
}
