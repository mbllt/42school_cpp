#ifndef INVALIDINPUTEXCEPTION_HPP
#define INVALIDINPUTEXCEPTION_HPP

#include <iostream>
#include <string>

class InvalidInputException : public std::exception {
			
			private :
				std::string	_messageErr;

			public :
				
				InvalidInputException(std::string std) throw() : _messageErr(std) {};
				virtual ~InvalidInputException() throw() {};
		
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};

#endif