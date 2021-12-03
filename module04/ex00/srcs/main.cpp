#include "main.hpp"

int	main(void) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\n";

	std::cout << "type : " << j->getType() << "." << std::endl;
	std::cout << "type : " << i->getType() << "." << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	std::cout << "\n";

	const WrongAnimal* metabis = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << "\n";

	std::cout << "type : " << metabis->getType() << "." << std::endl;
	std::cout << "type : " << k->getType() << "." << std::endl;
	metabis->makeSound();
	k->makeSound();
	std::cout << "\n";

	delete (meta);
	delete (i);
	delete (j);
	delete (metabis);
	delete (k);
	return (0);
}
// MORE TESTS !!!!!!!
