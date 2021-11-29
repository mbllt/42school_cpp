#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <cstdlib>
#include <iostream>

//-------Classe canonique--------
//
//	Une classe canonique c'est juste une classe qui a les méthodes(fonctions) suivantes :
//
//		.Un constructeur par défaut
//		.Un constructeur pas copie
//		.Un destructeur éventuellement virtuel
//		.Une surcharge d'operateur =
//

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