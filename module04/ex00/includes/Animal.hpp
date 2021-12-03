#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "main.hpp"

class Animal {

	public:
		
		Animal(void);
		Animal(Animal const& cpy);
		virtual ~Animal(void);

		Animal&			operator=(Animal const & src);

		std::string		getType() const;
		virtual void	makeSound() const;


	protected:

		std::string		_type;


};

class WrongAnimal {

	public:
		
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const& cpy);
		virtual ~WrongAnimal(void);

		WrongAnimal&			operator=(WrongAnimal const & src);

		std::string		getType() const;
		void			makeSound() const;


	protected:

		std::string		_type;


};

#endif