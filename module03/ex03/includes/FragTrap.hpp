#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "main.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const& cpy);
		~FragTrap(void);

		FragTrap&		operator=(FragTrap const & src);

		void			attack(std::string const & target);
		void			highFivesGuys();

	protected:


};

#endif