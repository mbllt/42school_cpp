#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

//-------Accessibilite--------
//
//	.public : accesible par tout le monde
//	.private : accesible par une instance de la classe
//					ou une instance d'une classe dérivée
//	.protected : accessible par une instance de la classe
//

class ClapTrap {

	public:
		
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& cpy);
		~ClapTrap(void);

		ClapTrap&		operator=(ClapTrap const & src);

		void			attack(std::string const & target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;


	private:

		std::string		_name;
		unsigned int	_hitPoints; // HP
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;


};

#endif