#include "main.hpp"

int	main()
{
	ClapTrap Leo("Leo");
	ClapTrap Drake("Drake");
	ClapTrap Zoro("Zoro");
	std::cout << "\n";

	Leo.attack(Drake.getName());
	Drake.takeDamage(Leo.getAttackDamage());
	std::cout << "\n";

	ClapTrap Harry(Drake);
	std::cout << "\n";

	Zoro.beRepaired(3);
	Zoro.attack(Harry.getName());
	Harry.takeDamage(Zoro.getAttackDamage());
	std::cout << "\n";

	ScavTrap Mia("Mia");
	ScavTrap Esteban("Esteban");
	std::cout << "\n";

	Mia.attack(Leo.getName());
	Leo.takeDamage(Mia.getAttackDamage());
	Zoro.attack(Esteban.getName());
	Esteban.takeDamage(Zoro.getAttackDamage());
	Esteban.guardGate();
	std::cout << "\n";

	FragTrap Mathis("Mathis");
	FragTrap Hugo("Jean-Mich");
	std::cout << "\n";

	Drake.attack(Hugo.getName());
	Hugo.takeDamage(Drake.getAttackDamage());
	std::cout << "Mathis energy points : " << Mathis.getEnergyPoints() << "." << std::endl;
	Mathis.highFivesGuys();
	Esteban.beRepaired(10000);
	Hugo.attack(Mathis.getName());
	Mathis.takeDamage(Hugo.getAttackDamage());
	std::cout << "\n";

	return 0;
}