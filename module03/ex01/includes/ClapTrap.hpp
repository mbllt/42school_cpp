#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

//-------Heritage--------
//
//	Une classe canonique c'est juste une classe qui a les méthodes(fonctions) suivantes :
//
//		.Un constructeur par défaut
//		.Un constructeur pas copie
//		.Un destructeur éventuellement virtuel
//		.Une surcharge d'operateur =
//

class ClapTrap {

	public:
		
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& cpy);
		~ClapTrap(void);

		ClapTrap&		operator=(ClapTrap const & src);

		void			attack(std::string const & target) const ;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName () const;
		unsigned int	getHitPoints () const;
		unsigned int	getEnergyPoints () const;
		unsigned int	getAttackDamage () const;


	private:

		std::string		_name;
		unsigned int	_hitPoints; // HP
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;


};

#endif