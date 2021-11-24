#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie {


public:

	std::string			get_name(void) const;
	void				set_name(std::string str);

	void				Zombie(void);
	void				~Zombie(void);

	void				announce(void);


private:

	std::string	const	_name;

};

#endif