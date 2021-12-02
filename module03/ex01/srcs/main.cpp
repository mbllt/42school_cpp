#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	ScavTrap Mia("Mia");
	ScavTrap Esteban("Esteban");
	std::cout << "\n";

	Mia.attack(Leo.getName());
	Leo.takeDamage(Mia.getAttackDamage());
	Claire.attack(Esteban.getName());
	Esteban.takeDamage(Claire.getAttackDamage());
	Esteban.guardGate();
	std::cout << "\n";
	return 0;
}