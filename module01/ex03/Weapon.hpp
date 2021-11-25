#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {

	public:

									Weapon(void);
									Weapon(std::string str);
									~Weapon(void);

		void						setType(std::string str);
		std::string const&			getType();


	private:

		std::string					type;


};

#endif