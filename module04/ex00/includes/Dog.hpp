#ifndef DOG_HPP
#define DOG_HPP

#include "main.hpp"

//-------Polymorphism--------
//
//

class Dog : public Animal {

	public:
		
		Dog(void);
		Dog(Dog const& cpy);
		virtual ~Dog(void);

		Dog&		operator=(Dog const & src);


	protected:


};

#endif