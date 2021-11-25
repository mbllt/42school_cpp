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

	void				announce(void);

private:

	std::string	const	_name;

};

#endif