#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {

	public:
		
		Ice(void);
		Ice(Ice const& cpy);
		Ice(std::string const & type);
		virtual ~Ice(void);

		Ice&					operator=(Ice const & src);

		std::string const &		getType() const;

		AMateria *				clone() const;


};

#endif