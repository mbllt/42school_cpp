#ifndef GRADETOOHIGHEXCEPTION_HPP
#define GRADETOOHIGHEXCEPTION_HPP

#include <iostream>
#include <string>

class GradeTooHighException {

	protected:


	public:
		
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const& cpy);
		virtual ~GradeTooHighException(void);

		GradeTooHighException&			operator=(GradeTooHighException const & src);


};

#endif
