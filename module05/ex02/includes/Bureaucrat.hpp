#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

	protected:

		std::string const	_name;
		int					_grade;


	public:
		
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const& cpy);
		virtual ~Bureaucrat(void);

		Bureaucrat&			operator=(Bureaucrat const & src);

		std::string			getName() const;
		int					getGrade() const;

		void				moveUpGrade();
		void				moveDownGrade();
		void				signForm(AForm const & form) const;
		void				executeForm(AForm const & form) const;

		class GradeTooHighException : public std::exception {

			public :
		
				GradeTooHighException(std::string std) throw() : _messageErr(std) {};
				virtual ~GradeTooHighException() throw() {};
		
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		
		
			private :

				std::string		_messageErr;
		};

		class GradeTooLowException : public std::exception {

			public :

				GradeTooLowException(std::string std) throw() : _messageErr(std) {};
				virtual ~GradeTooLowException() throw() {};

				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}


			private :

				std::string		_messageErr;
		};

};

std::ostream&		operator<<(std::ostream & o, Bureaucrat const & src);

#endif