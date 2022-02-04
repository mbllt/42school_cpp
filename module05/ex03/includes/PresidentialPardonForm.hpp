#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"


class PresidentialPardonForm : public AForm {

	private :

		std::string		_target;

	public :

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& cpy);
		virtual ~PresidentialPardonForm(void);

		void	execute(Bureaucrat const & executor) const;

		PresidentialPardonForm&	operator=(PresidentialPardonForm const & src);

		class NotSignedException : public std::exception {
			
			private :
				std::string	_messageErr;

			public :
				
				NotSignedException(std::string std) throw() : _messageErr(std) {};
				virtual ~NotSignedException() throw() {};
		
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};

};

std::ostream&	operator<<(std::ostream& o, PresidentialPardonForm const & src);

#endif