#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include "main.hpp"

//-------Heritage--------
//
//
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
		void			setName (std::string name);
		void			setHitPoints (int nb);
		void			setEnergyPoints (int nb);
		void			setAttackDamage (int nb);


	private:

		std::string		_name;
		unsigned int	_hitPoints; // HP
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;


};

#endif