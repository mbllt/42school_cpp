#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "main.hpp"

class Phonebook {

	public :

		Phonebook(void);
		~Phonebook(void);

		Contact get_contact(int const i) const;
		void	set_contact(Contact const contact, int const i);
		void	print_contact(int const i) const;
		void	print_contacts(void) const;

	private :

		Contact	_contact[8];

};

#endif