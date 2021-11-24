#include "main.hpp"

Phonebook::Phonebook (void) {

	return;
}

Phonebook::~Phonebook (void)
{

	return;
}

Contact	Phonebook::get_contact (int const i) const {

	return this->_contact[i];
}

void	Phonebook::set_contact (Contact const contact, int const i) {

	this->_contact[i] = contact;
	return;
}

void	Phonebook::print_contact (int const i) const {

	std::cout << "Firstname : " << this->_contact[i].get_firstname() << std::endl;
	std::cout << "Lastname : " << this->_contact[i].get_lastname() << std::endl;
	std::cout << "Nickname : " << this->_contact[i].get_nickname() << std::endl;
	std::cout << "Phone number : " << this->_contact[i].get_phonenum() << std::endl;
	std::cout << "Darkest secret : " << this->_contact[i].get_darkest_secret() << std::endl;
	return;
}

void	Phonebook::print_contacts (void) const {

	for (int i = 0; i < 43; i++)
		std::cout << "_";
	std::cout << "\n";
	std::cout << "|";
	std::cout << std::setw(9);
	std::cout << "Index";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "Firstname";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "Lastname";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "Nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::string tmp;
		tmp = this->_contact[i].get_firstname();
		if (tmp.empty())
			break;
		std::cout << "|";
		std::cout << std::setw(9);
		std::cout << this->_contact[i].index << "|";
		std::cout << std::setw(10);
		tmp = this->_contact[i].get_firstname();
		if (tmp.length() > 10)
		{
			tmp.resize(9);
			tmp.append(1u, '.');
		}
		std::cout << tmp << "|";
		std::cout << std::setw(10);
		tmp = this->_contact[i].get_lastname();
		if (tmp.length() > 10)
		{
			tmp.resize(9);
			tmp.append(1u, '.');
		}
		std::cout << tmp << "|";
		std::cout << std::setw(10);
		tmp = this->_contact[i].get_nickname();
		if (tmp.length() > 10)
		{
			tmp.resize(9);
			tmp.append(1u, '.');
		}
		std::cout << tmp << "|" << std::endl;
	}
	std::cout << "\n";
	return;
}