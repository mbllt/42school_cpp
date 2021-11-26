#include "Fixed.hpp"

Fixed::Fixed (void) {

	_rawBits = 0;
}

Fixed::Fixed (Fixed const& cpy) {

	*this = cpy;
}

Fixed::~Fixed (void) {

}

Fixed & Fixed::operator=(Fixed const & src) {

	_rawBits = src.getRawBits();
	return *this;
}

int Fixed::getRawBits (void) const {

	return _rawBits;
}

void Fixed::setRawBits(int const raw) {
	
	_rawBits = raw;
}

int const Fixed::_nbBits = 0;
