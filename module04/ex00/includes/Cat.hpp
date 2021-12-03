#ifndef CAT_HPP
#define CAT_HPP

#include "main.hpp"

class Cat : public Animal {

	public:
		
		Cat(void);
		Cat(Cat const& cpy);
		virtual ~Cat(void);

		Cat&		operator=(Cat const & src);

		void		makeSound() const;


	private:


};

class WrongCat : public WrongAnimal {

	public:
		
		WrongCat(void);
		WrongCat(WrongCat const& cpy);
		virtual ~WrongCat(void);

		WrongCat&		operator=(WrongCat const & src);

		virtual void	makeSound() const;


	private:


};

#endif