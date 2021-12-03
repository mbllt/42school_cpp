#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP

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

class DiamondTrap : public ScavTrap, public FragTrap {

	public:
		
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& cpy);
		~DiamondTrap(void);

		DiamondTrap&		operator=(DiamondTrap const & src);

		std::string			getName() const;
		std::string			getClapName() const;

		void				attack(std::string const & target);
		void				whoAmI();


	private:

		std::string			_name;


};

#endif