#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

	public:
		
		Cat(void);
		Cat(Cat const& cpy);
		virtual ~Cat(void);

		Cat&			operator=(Cat const & src);

		virtual void	makeSound() const;
		Brain *			getBrain() const;


	private:

		Brain *		_brain;


};

#endif