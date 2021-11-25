#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <cstdlib>
#include <string>
#include <iostream>

class Zombie {


public:

						Zombie(void);
						Zombie(std::string name);
						~Zombie(void);

	void				set_name(std::string name);
	void				announce(void);

private:

	std::string	_name;

};

#endif