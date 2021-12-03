#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {

	public:
		
		AAnimal(void);
		AAnimal(AAnimal const& cpy);
		virtual ~AAnimal(void);

		AAnimal&			operator=(AAnimal const & src);

		std::string		getType() const;
		virtual void	makeSound() const = 0;


	protected:

		std::string		_type;


};

#endif