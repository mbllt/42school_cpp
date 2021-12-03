#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

#endif