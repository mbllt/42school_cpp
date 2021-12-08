#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>

class Cure : public AMateria {

	protected:

		std::string		_type;


	public:
		
		Cure(void);
		Cure(Cure const& cpy);
		virtual ~Cure(void);

		Cure&					operator=(Cure const & src);

		std::string const &		getType() const;


};

#endif