#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP

#include <iostream>
#include <string>

class GradeTooLowException {

	protected:


	public:
		
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const& cpy);
		virtual ~GradeTooLowException(void);

		GradeTooLowException&			operator=(GradeTooLowException const & src);


};

#endif
