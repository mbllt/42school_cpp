#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "main.hpp"

class ScavTrap : virtual public ClapTrap {

	public:
		
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& cpy);
		~ScavTrap(void);

		ScavTrap&		operator=(ScavTrap const & src);

		void			attack(std::string const & target);
		void			guardGate();

	protected:


};

#endif