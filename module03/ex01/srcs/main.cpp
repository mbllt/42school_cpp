#include "main.hpp"

int	main()
{
	ClapTrap Leo("Leo");
	ClapTrap Drake("Drake");
	ClapTrap Claire("Claire");
	std::cout << "\n";

	Leo.attack(Drake.getName());
	Drake.takeDamage(Leo.getAttackDamage());
	std::cout << "\n";

	ClapTrap Harry(Drake);
	ClapTrap Zoro("Zoro");
	Zoro = Drake;
	std::cout << "\n";

	Zoro.beRepaired(3);
	Zoro.attack(Harry.getName());
	Harry.takeDamage(Zoro.getAttackDamage());
	std::cout << "\n";

	ScavTrap Mia("Mia");
	ScavTrap Esteban("Esteban");
	std::cout << "\n";

	std::cout << "Mia energy points : " << Mia.getEnergyPoints() << "." << std::endl;
	Mia.attack(Leo.getName());
	Leo.takeDamage(Mia.getAttackDamage());
	Claire.attack(Esteban.getName());
	Esteban.takeDamage(Claire.getAttackDamage());
	Esteban.guardGate();
	std::cout << "\n";
	return 0;
}