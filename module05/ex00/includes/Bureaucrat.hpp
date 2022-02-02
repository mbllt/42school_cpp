#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {

	protected:

		std::string const	_name;
		unsigned short int	_grade;


	public:
		
		Bureaucrat(std::string const name, unsigned short int grade);
		Bureaucrat(Bureaucrat const& cpy);
		virtual ~Bureaucrat(void);

		Bureaucrat&			operator=(Bureaucrat const & src);

		std::string			getName() const;
		unsigned short int	getGrade() const;

		void				moveUpGrade();
		void				moveDownGrade();
		void				display() const;


};

#endif