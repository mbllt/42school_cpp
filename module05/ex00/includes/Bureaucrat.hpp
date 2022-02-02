#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

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

		class GradeTooHighException : public std::exception {

			public :
		
				GradeTooHighException(std::string std);
				virtual ~GradeTooHighException() throw();
		
				virtual const char* what() const throw();
		
		
			private :

				std::string		_messageErr;
		};

		class GradeTooLowException : public std::exception {

			public :

				GradeTooLowException(std::string std);
				virtual ~GradeTooLowException() throw();

				virtual const char* what() const throw();


			private :

				std::string		_messageErr;
		};

};

std::ostream&		operator<<(std::ostream & o, Bureaucrat const & src);

#endif