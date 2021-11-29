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
	_rawBits = (float)i * (float)(1 << _nbBits);
}

Fixed::Fixed (float const f) {
	_rawBits = roundf(f * (float)(1 << _nbBits));
}

Fixed::~Fixed (void) {
}
// -----------------------------------------


// ------------Overload operator-------------
Fixed & Fixed::operator=(Fixed const & src) {
	_rawBits = src.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const & src) {
	return Fixed(toFloat() + src.toFloat());
}

Fixed& Fixed::operator++(void) {	// prefix
	_rawBits++;
	return *this;
}

Fixed Fixed::operator++(int) {		// postfix
	Fixed tmp(*this);
	_rawBits++;
	return tmp;
}

Fixed Fixed::operator-(Fixed const & src) {
	return Fixed(toFloat() - src.toFloat());
}

Fixed& Fixed::operator--(void) {	// prefix
	_rawBits--;
	return *this;
}

Fixed Fixed::operator--(int) {		// postfix
	Fixed tmp(*this);
	_rawBits--;
	return tmp;
}

Fixed Fixed::operator*(Fixed const & src) {
	return Fixed(toFloat() * src.toFloat());
}

Fixed Fixed::operator/(Fixed const & src) {
	return Fixed(toFloat() / src.toFloat());
}

bool Fixed::operator<(Fixed const & src) const {
	if (_rawBits < src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const & src) const {
	if (_rawBits <= src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(Fixed const & src) const {
	if (_rawBits > src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const & src) const {
	if (_rawBits >= src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const & src) const {
	if (_rawBits == src.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const & src) const {
	if (_rawBits != src.getRawBits())
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
	return (float)_rawBits / (float)(1 << _nbBits);
}

int Fixed::toInt(void) const {
	return (float)_rawBits / (float)(1 << _nbBits);
}

Fixed Fixed::min(Fixed const fixed1, Fixed const fixed2){
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return (fixed1);
	return (fixed2);
}

Fixed Fixed::max(Fixed const fixed1, Fixed const fixed2){
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return (fixed1);
	return (fixed2);
}
// ------------------------------------------
