#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "main.hpp"

//-------Polymorphism--------
//
//

class Animal {

	public:
		
		Animal(void);
		Animal(std::string name);
		Animal(Animal const& cpy);
		virtual ~Animal(void);

		Animal&			operator=(Animal const & src);

		std::string		getName() const;


	protected:

		std::string		_type;
		std::string		_name;


};

#endif