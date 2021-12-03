#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

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

class ClapTrap {

	public:
		
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& cpy);
		virtual ~ClapTrap(void);

		ClapTrap&		operator=(ClapTrap const & src);

		void			attack(std::string const & target) const ;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName () const;
		unsigned int	getHitPoints () const;
		unsigned int	getEnergyPoints () const;
		unsigned int	getAttackDamage () const;
		void			setName (std::string name);
		void			setHitPoints (int nb);
		void			setEnergyPoints (int nb);
		void			setAttackDamage (int nb);


	protected:

		std::string		_name;
		unsigned int	_hitPoints; // HP
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;


};

#endif