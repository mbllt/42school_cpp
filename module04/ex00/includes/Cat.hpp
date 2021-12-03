#ifndef CAT_HPP
#define CAT_HPP

#include "main.hpp"

//-------Polymorphism--------
//
//

class Cat : public Animal {

	public:
		
		Cat(void);
		Cat(std::string name);
		Cat(Cat const& cpy);
		virtual ~Cat(void);

		Cat&		operator=(Cat const & src);


	protected:


};

#endif