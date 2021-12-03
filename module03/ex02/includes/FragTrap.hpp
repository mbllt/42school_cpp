#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "main.hpp"

//-------Heritage--------
//
//	Dans cet exemple il faut utiliser un virtual pour le destructeur de ClapTrap
//	si on veut que FragTrap se detruise dans Frag et dans Clap :
//
//		ClapTrap * tmp = new FragTrap("Bob");
//		(void)tmp;
//		delete(tmp);
//
//	Pourquoi ? Parce que Clap et Frag sont au même endroit dans la mémoire et que on stock dans Clap
//	qui n'a q'un seul destructeur.
//

class FragTrap : public ClapTrap {

	public:
		
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const& cpy);
		~FragTrap(void);

		FragTrap&		operator=(FragTrap const & src);

		void			attack(std::string const & target);
		void			highFivesGuys(void);

	private:


};

#endif