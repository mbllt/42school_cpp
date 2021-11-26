#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <cstdlib>
#include <iostream>

class Fixed {

	public:

		Fixed ();
		Fixed (Fixed const& cpy);
		~Fixed ();

		Fixed&				operator=(Fixed const & src);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);


	private:

		int					_rawBits;
		static int	const	_nbBits;


};

#endif