#include "AMateria.hpp"

//-----Constructors/Destructors----
AMateria::AMateria(void) {
	std::cout << "Constructing AMateria." << std::endl;
	_type = "AMateria";
}

AMateria::AMateria(std::string const & type) {
	std::cout << "Constructing AMateria with type." << std::endl;
	_type = type;
}

AMateria::AMateria (AMateria const& cpy) {
	std:: cout << "Copy constructor called in AMateria." << std::endl;
	*this = cpy;
}

AMateria::~AMateria(void) {
	std::cout << "Destructing AMateria." << std::endl;
}
//--------------------------------


//-----------Operators------------
AMateria & AMateria::operator=(AMateria const & src) {
	std::cout << "Assignment operator called in AMateria." << std::endl;
	_type = src.getType();
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string const & AMateria::getType () const {
	return *_type;
}
//--------------------------------


//------------Functions-----------
AMateria* clone() const {
	AMateria bis = new AMateria(this.getType());
	return &bis;
}

void use(ICharacter& target) {
	if (Cure::Cure.getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else if (Ice::Ice.getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
//-------------------------------