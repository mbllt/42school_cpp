#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Intern {

	private:

	public:
		
		Intern();
		Intern(Intern const& cpy);
		virtual ~Intern(void);

		Intern&		operator=(Intern const & src);

		AForm*		makeForm(std::string name, std::string target) const;

		class FormNotExistentException : public std::exception {
			
			private :
				std::string	_messageErr;

			public :
				
				FormNotExistentException(std::string std) throw() : _messageErr(std) {};
				virtual ~FormNotExistentException() throw() {};
		
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};

};

#endif