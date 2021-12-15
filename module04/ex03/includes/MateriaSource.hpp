#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	protected :

		AMateria*			_learnMateria[4];
		unsigned int		_nbrLearnMateria;


	public :

		MateriaSource(void);
		MateriaSource(MateriaSource const & cpy);
		virtual ~MateriaSource(void);

		MateriaSource &		operator=(MateriaSource const & cpy);

		void				learnMateria(AMateria * tmp);
		AMateria *			createMateria(std::string const & type);

};

#endif