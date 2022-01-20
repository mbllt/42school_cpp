#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP

#include <iostream>
#include <string>

class Bureaucrat : public Bureaucrat {

	protected:


	public:
		
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const& cpy);
		virtual ~Bureaucrat(void);

		Bureaucrat&			operator=(Bureaucrat const & src);


};

#endif
