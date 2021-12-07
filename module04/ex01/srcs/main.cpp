#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void) {

	const Animal* meta[4];
	
	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << "\n";

	for (int i = 0; i < 4; i++)
		delete (meta[i]);
	std::cout << "\n";

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\n";

	delete j;
	delete i;
	std::cout << "\n\n------------------------------\n\n";

	Dog A;
	std::cout << "\n";
	Dog B(A);
	std::cout << "\n";
	Dog C = A;
	std::cout << "\n";
	std::cout << "\n------------------------------\n\n";

	Cat	cat = Cat();
	cat.getBrain()->setIdea(3, "LOL");
	Cat cpy = cat;
	Cat cpy2(cat);
	std::cout << "\n";

	std::cout << "Copy:" << std::endl;
	cpy.getBrain()->displayIdeas();
	std::cout << "Copy2:" << std::endl;
	cpy2.getBrain()->displayIdeas();
	std::cout << "Cat:" << std::endl;
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
