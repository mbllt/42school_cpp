#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm {

	private :

		std::string		_target;

	public :

		RobotomyRequestForm(std::string name, std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& cpy);
		virtual ~RobotomyRequestForm(void);

		void	execute(Bureaucrat const & executor) const;

		RobotomyRequestForm&	operator=(RobotomyRequestForm const & src);

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

		class NotRobotomisedException : public std::exception {
			
			private :
				std::string	_messageErr;

			public :
				
				NotRobotomisedException(std::string std) throw() : _messageErr(std) {};
				virtual ~NotRobotomisedException() throw() {};
		
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};

};

std::ostream&	operator<<(std::ostream& o, RobotomyRequestForm const & src);

#endif