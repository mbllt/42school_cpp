#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Leo;
	ClapTrap Yoan("Yoan");
	ClapTrap Claire("Claire");
	std::cout << "\n";

	Leo.attack(Yoan.getName());
	Yoan.takeDamage(Leo.getAttackDamage());
	std::cout << "Claire energy points : " << Claire.getEnergyPoints() << "." << std::endl;
	Claire.beRepaired(3);
	ClapTrap Harry(Yoan);
	Claire.attack(Harry.getName());
	Harry.takeDamage(Claire.getAttackDamage());
	std::cout << "\n";
	return 0;
}