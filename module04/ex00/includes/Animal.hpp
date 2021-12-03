#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "main.hpp"

//-------Polymorphism--------
//
//

class Animal {

	public:
		
		Animal(void);
		Animal(Animal const& cpy);
		virtual ~Animal(void);

		Animal&			operator=(Animal const & src);

		std::string		getType() const;


	protected:

		std::string		_type;


};

#endif