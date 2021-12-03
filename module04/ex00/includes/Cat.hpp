#ifndef CAT_HPP
#define CAT_HPP

#include "main.hpp"

//-------Polymorphism--------
//
//

class Cat : public Animal {

	public:
		
		Cat(void);
		Cat(Cat const& cpy);
		virtual ~Cat(void);

		Cat&		operator=(Cat const & src);

		void		makeSound() const;


	protected:


};

class WrongCat : public WrongAnimal {

	public:
		
		WrongCat(void);
		WrongCat(WrongCat const& cpy);
		virtual ~WrongCat(void);

		WrongCat&		operator=(WrongCat const & src);

		void		makeSound() const;


	protected:


};

#endif