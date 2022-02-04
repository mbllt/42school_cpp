#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private :

		std::string const	_name;
		bool				_signed;
		int const			_sign;
		int const			_exec;


	public :

		AForm(std::string name, int sign, int exec);
		AForm(AForm const& cpy);
		virtual ~AForm(void);

		AForm&			operator=(AForm const & src);

		std::string		getName() const;
		bool			getSigned() const;
		int				getSign() const;
		int				getExec() const;

		void			beSigned(Bureaucrat const & brc);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception {

			private :

				std::string		_messageErr;

			public :
		
				GradeTooHighException(std::string std) throw() : _messageErr(std) {};
				virtual ~GradeTooHighException() throw() {};
		
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		
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

std::ostream&	operator<<(std::ostream& o, AForm const & src);

#endif