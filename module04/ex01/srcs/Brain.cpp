#include "Brain.hpp"

//-----Constructors/Destructors----
Brain::Brain(void) {
	std::cout << "Constructing Brain" << std::endl;
}

Brain::Brain (Brain const& cpy) {
	std:: cout << "Copy constructor called in Brain." << std::endl;
	*this = cpy;
}

Brain::~Brain(void) {
	std::cout << "Destructing Brain." << std::endl;
}
//--------------------------------


//-----------Operators------------
Brain & Brain::operator=(Brain const & src) {
	std::cout << "Assignment operator called in Brain." << std::endl;
	(void)src;
	return *this;
}
//--------------------------------


//--------Getters/Setters---------
std::string Brain::getIdea (int nb) const {
	if (nb < 100)
		return _ideas[nb];
	else
		return ("Wow, hold on ! I dont have more than a hundred ideas fellow.");
}

void Brain::setIdea (int nb, std::string str) {
	if (nb < 100)
		_ideas[nb] = str;
}
//--------------------------------


//------------Functions----------

void Brain::displayIdeas() const {
	for (int i = 0; i < 100; i++)
		if (_ideas[i] != "")
			std::cout << _ideas[i] << std::endl;
}
//-------------------------------
