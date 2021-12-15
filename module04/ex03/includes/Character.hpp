#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter {

	private :

		std::string		_name;
		AMateria*		_materia[4];
		unsigned int	_nbrMateria;


	public:
		
		Character(void);
		Character(std::string const name);
		Character(Character const & cpy);
		virtual ~Character(void);

		Character&						operator=(Character const & src);

		std::string const &				getName() const;

		void							equip(AMateria* m);
		void							unequip(int idx);
		void							use(int idx, ICharacter& target);


};


#endif