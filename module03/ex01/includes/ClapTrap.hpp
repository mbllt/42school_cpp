#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	public:
		
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);

		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName(void);
		unsigned int	getAttackDamage(void);


	private:

		std::string		_name;
		unsigned int	_hitPoints; // HP
		unsigned int	_eneryPoints;
		unsigned int	_attackDamage;


};

#endif