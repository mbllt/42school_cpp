#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private :

		std::string		_name;
		bool			_signed;
		int				_sign;
		int				_exec;


	public :

		Form(std::string name, int sign, int exec);
		Form(Form const& cpy);
		virtual ~Form(void);

		Form&			operator=(Form const & src);

		std::string		getName() const;
		bool			getSigned() const;
		int				getSign() const;
		int				getExec() const;

		void			beSigned(Bureaucrat const & brc);

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

std::ostream&	operator<<(std::ostream& o, Form const & src);

#endif