#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void) {

	// AAnimal Ours;
	const AAnimal * test = new Dog();
	Dog A;
	Dog B(A);
	Dog C = A;
	std::cout << "\n";

	test->makeSound();
	std::cout << "\n";
	delete (test);
	std::cout << "\n------------------------------\n\n";

	Cat	cat = Cat();
	cat.getBrain()->setIdea(3, "LOL");
	Cat cpy = cat;
	Cat cpy2(cat);
	std::cout << "\n"; // l'ordre des constructionme parait bizarre...

	std::cout << "Copy:" << std::endl;
	cpy.getBrain()->displayIdeas();
	std::cout << "Copy2:" << std::endl;
	cpy2.getBrain()->displayIdeas();
	std::cout << "Cat: set idea" << std::endl;
	cat.getBrain()->setIdea(5, "MDR");
	std::cout << "Copy:" << std::endl;
	cpy.getBrain()->displayIdeas();
	std::cout << "Copy2:" << std::endl;
	cpy2.getBrain()->displayIdeas();
	std::cout << "Cat:" << std::endl;
	cat.getBrain()->displayIdeas();
	std::cout << "\n";

	return (0);
}
