#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {

	public:


					HumanA(std::string new_name, Weapon& new_weapon);
					~HumanA(void);

		void		attack();


	private:

		Weapon&		_weapon;
		std::string	_name;


};

#endif