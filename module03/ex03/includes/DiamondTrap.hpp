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
		std::string			getClapName() const;

		void				attack(std::string const & target);
		void				whoAmI();


	private:

		std::string			_name;
		std::string			_clap_name;


};

#endif