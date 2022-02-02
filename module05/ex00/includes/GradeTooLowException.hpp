#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP

#include <iostream>
#include <string>
#include <exception>

class GradeTooLowException : public std::exception {

	public :

		GradeTooLowException(std::string std);
		virtual ~GradeTooLowException() throw();

		virtual const char* what() const throw();


	private :

		std::string		_messageErr;

};

#endif