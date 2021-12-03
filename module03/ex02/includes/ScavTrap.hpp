#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

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

class ScavTrap : public ClapTrap {

	public:
		
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& cpy);
		~ScavTrap(void);

		ScavTrap&		operator=(ScavTrap const & src);

		void			attack(std::string const & target);
		void			guardGate();

	private:


};

#endif