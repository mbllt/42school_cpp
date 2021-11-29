#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Leo("Leo");
	ClapTrap Yoan("Yoan");
	ClapTrap Claire("Claire");

	Leo.attack("Yoan");
	Claire.beRepaired(3);
	Claire.attack("Leo");
	return 0;
}