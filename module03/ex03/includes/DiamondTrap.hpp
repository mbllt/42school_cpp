#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP

#include "main.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	public:
		
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& cpy);
		~DiamondTrap(void);

		DiamondTrap&		operator=(DiamondTrap const & src);

		std::string			getName() const;

		void				whoAmI();


	private:

		std::string			_name;


};

#endif