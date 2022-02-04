#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {

	private :

		std::string		_target;

	public :

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const& cpy);
		virtual ~ShrubberyCreationForm(void);

		void	execute(Bureaucrat const & executor) const;

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & src);

		class FileNotOpened : public std::exception {
			
			private :
				std::string _messageErr;

			public :
				
				FileNotOpened(std::string std) throw() : _messageErr(std) {};
				virtual ~FileNotOpened() throw() {};
		
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};

};

std::ostream&	operator<<(std::ostream& o, ShrubberyCreationForm const & src);

#endif