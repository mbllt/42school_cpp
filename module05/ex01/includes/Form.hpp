#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form {

	public :

		Form(void);
		Form(Form const& cpy);
		virtual ~Form(void);

		Form&			operator=(Form const & src);

		std::string		getName() const;
		int				getSigned() const;
		int				getSign() const;
		int				getExec() const;


	private :

		std::string		_name;
		bool			_signed;
		int				_sign;
		int				_exec;

};

std::ostream&	operator<<(std::ostream& o, Form const & src);

#endif