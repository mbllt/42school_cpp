#ifndef CONTACT_SAMPLE_HPP
#define CONTACT_SAMPLE_HPP

#include "../includes/main.hpp"

class Contact {

	public:

		Contact(void);
		Contact(std::string firstname, std::string lastname, std::string nickname,
				std::string phonenum, std::string darkest_secret);
		~Contact(void);

		std::string get_firstname(void) const;
		std::string get_lastname(void) const;
		std::string get_nickname(void) const;
		std::string get_phonenum(void) const;
		std::string get_darkest_secret(void) const;
		void set_firstname(std::string str);
		void set_lastname(std::string str);
		void set_nickname(std::string str);
		void set_phonenum(std::string str);
		void set_darkest_secret(std::string str);

	private:

		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenum;
		std::string	_darkest_secret;
};

#endif