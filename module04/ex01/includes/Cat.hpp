#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:
		
		Cat(void);
		Cat(Cat const& cpy);
		virtual ~Cat(void);
		// ~Cat(void);

		Cat&			operator=(Cat const & src);

		virtual void	makeSound() const;
		// void			makeSound() const;
		Brain *			getBrain() const;


	private:

		Brain *			_brain;


};

#endif