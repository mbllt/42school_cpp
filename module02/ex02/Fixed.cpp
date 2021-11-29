#include "Fixed.hpp"

int const Fixed::_nbBits = 8;

// ---------Constructor/Destructor----------
Fixed::Fixed (void) {
	_rawBits = 0;
}

Fixed::Fixed (Fixed const& cpy) {
	*this = cpy;
}

Fixed::Fixed (int const i) {
	_rawBits = (double)i * (double)(1 << _nbBits);
}

Fixed::Fixed (float const f) {
	_rawBits = (double)f * (double)(1 << _nbBits);
}

Fixed::~Fixed (void) {
}
// -----------------------------------------


// ------------Overload operator-------------
Fixed & Fixed::operator=(Fixed const & src) {
	_rawBits = src.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const & src) const {
	return Fixed(_rawBits + src.getRawBits());
}

Fixed& Fixed::operator++(void) {
	_rawBits++;
	return *this;
}

Fixed Fixed::operator-(Fixed const & src) const {
	return Fixed(_rawBits - src.getRawBits());
}

Fixed& Fixed::operator--(void) {
	_rawBits--;
	return *this;
}

Fixed Fixed::operator*(Fixed const & src) const {
	return Fixed(_rawBits * src.getRawBits());
}

Fixed Fixed::operator/(Fixed const & src) const {
	return Fixed(_rawBits / src.getRawBits());
}

bool operator<(Fixed const & src) {
	if (_rawBits < srcs.getRawBits())
		return true;
	return false;
}

bool operator<=(Fixed const & src) {
	if (_rawBits <= srcs.getRawBits())
		return true;
	return false;
}

bool operator>(Fixed const & src) {
	if (_rawBits > srcs.getRawBits())
		return true;
	return false;
}

bool operator>=(Fixed const & src) {
	if (_rawBits >= srcs.getRawBits())
		return true;
	return false;
}

bool operator==(Fixed const & src) {
	if (_rawBits == srcs.getRawBits())
		return true;
	return false;
}

bool operator!=(Fixed const & src) {
	if (_rawBits != srcs.getRawBits())
		return true;
	return false;
}

std::ostream & operator<<(std::ostream & o, Fixed const & src) {

	o << src.toFloat();
	return o;
}
// ------------------------------------------


// -------------Fonctions membres------------
int Fixed::getRawBits (void) const {
	return _rawBits;
}

void Fixed::setRawBits(int const raw) {
	_rawBits = raw;
}

float Fixed::toFloat(void) const {
	return (double)_rawBits / (double)(1 << _nbBits);
}

int Fixed::toInt(void) const {
	return (double)_rawBits / (double)(1 << _nbBits);
}
// ------------------------------------------
