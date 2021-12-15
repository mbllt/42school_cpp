#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria {

	public:
		
		Cure(void);
		Cure(Cure const& cpy);
		Cure(std::string const & type);
		virtual ~Cure(void);	// do I need to delete anything ?

		Cure&					operator=(Cure const & src);

		std::string const &		getType() const;

		AMateria *				clone() const;


};

#endif