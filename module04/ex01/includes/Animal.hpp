#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

	public:
		
		Animal(void);
		Animal(Animal const& cpy);
		virtual ~Animal(void);
		// ~Animal(void);

		Animal&			operator=(Animal const & src);

		std::string		getType() const;
		virtual void	makeSound() const;
		// void			makeSound() const;

	protected:

		std::string		_type;


};

#endif