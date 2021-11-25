#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {

	public:

					HumanB(void);
					HumanB(std::string new_name);
					~HumanB(void);

		void		attack();
		void		setWeapon(Weapon& new_weapon);


	private:

		Weapon*		_weapon;
		std::string	_name;


};

#endif