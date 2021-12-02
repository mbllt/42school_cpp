#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Leo("Leo");
	ClapTrap Yoan("Yoan");
	ClapTrap Claire("Claire");
	std::cout << "\n";

	Leo.attack(Yoan.getName());
	Yoan.takeDamage(Leo.getAttackDamage());

	Claire.beRepaired(3);

	Claire.attack(Leo.getName());
	Leo.takeDamage(Claire.getAttackDamage());
	std::cout << "\n";
	return 0;
}