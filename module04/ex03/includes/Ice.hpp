#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>

class Ice : public AMateria {

	protected:

		std::string		_type;


	public:
		
		Ice(void);
		Ice(Ice const& cpy);
		virtual ~Ice(void);

		Ice&					operator=(Ice const & src);

		std::string const &		getType() const;


};

#endif