#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter {

	public:
		
		ICharacter(void);
		ICharacter(std::string const name);
		ICharacter(ICharacter const& cpy);
		virtual ~ICharacter(void);

		ICharacter&						operator=(ICharacter const & src);

		virtual std::string const &		getName() const = 0;
		virtual void					equip(ICharacter* m) = 0;
		virtual void					unequip(int idx) = 0;
		virtual void					use(int idx, ICharacter& target) = 0;

		std::string						name;
		AMateria						materia[4];
		unsigned int					nbrMateria;


};