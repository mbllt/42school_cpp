#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <cstdlib>
#include <iostream>
#include <cmath>

//-------Valeur à point fixe--------
//
//		Un point fixe c'est un nombre qui a un nombre de bits prédéfinis pour sa partie fractionnelle
//	(pour notre exercice c'est 8) et de même pour sa partie décimal; Ce faisant, il lui faut 
//	tenir compte de l'endroit ou se trouve le point décimal, 8, seulement au moment de sa création;
//
//		Un float ne reserve pas un certain nombre de bit pour sa partie decimal et fractionelle, il
//	s'adapte en fonction du nombre et doit donc stocker l'emplacement du point décimal ce qui
//	rend les opérations plus lentes mais plus précises;
//
//		In other words, a fixed point number just means that there are a fixed number of digits after
//	the decimal point. A floating point number allows for a varying number of digits after the
//	decimal point. Thus, a fixed point makes the operations faster but slighty less accurate.
//
//
//	To stock a fixed point number we use an int.
//

class Fixed {

	public:

		Fixed ();
		Fixed (const int i);
		Fixed (const float f);
		Fixed (Fixed const& cpy);
		~Fixed ();

		Fixed&				operator=(Fixed const & src);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;


	private:

		int					_rawBits;
		static int	const	_nbBits;


};

std::ostream&		operator<<(std::ostream & o, Fixed const & src);

#endif