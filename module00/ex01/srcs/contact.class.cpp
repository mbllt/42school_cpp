#include "../includes/main.hpp"

Contact::Contact (void) {

	return;

}

Contact::Contact (std::string firstname, std::string lastname, std::string nickname,
					std::string phonenum, std::string darkest_secret)
					: _firstname(firstname), _lastname(lastname), _nickname(nickname),
					_phonenum(phonenum), _darkest_secret(darkest_secret) {

	return;
}

Contact::~Contact (void) {

	return;
}

std::string Contact::get_firstname() const {

	return this->_firstname;
}


std::string Contact::get_lastname() const {

	return this->_lastname;
}

std::string Contact::get_nickname() const {

	return this->_nickname;
}

std::string Contact::get_phonenum() const {

	return this->_phonenum;
}

std::string Contact::get_darkest_secret() const {

	return this->_darkest_secret;
}

void	Contact::set_firstname(std::string str) {

	this->_firstname = str;
	return;
}

void	Contact::set_lastname(std::string str) {

	this->_lastname = str;
	return;
}

void	Contact::set_nickname(std::string str) {

	this->_nickname = str;
	return;
}

void	Contact::set_phonenum(std::string str) {

	this->_phonenum = str;
	return;
}

void	Contact::set_darkest_secret(std::string str) {

	this->_darkest_secret = str;
	return;

}
