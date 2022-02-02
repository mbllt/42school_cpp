#ifndef GRADETOOHIGHEXCEPTION_HPP
#define GRADETOOHIGHEXCEPTION_HPP

#include <iostream>
#include <string>
#include <exception>

class GradeTooHighException : public std::exception {

	public :

		GradeTooHighException(std::string std);
		virtual ~GradeTooHighException() throw();

		virtual const char* what() const throw();


	private :

		std::string		_messageErr;

};

#endif