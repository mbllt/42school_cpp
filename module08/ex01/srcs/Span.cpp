#include <iostream>
#include <string>
#include "Span.hpp"

//-----Constructors/Destructors----
Span::Span(void) : _size(0) {
	// std::vector<int> _tab;
}
Span::Span(unsigned int n) : _size(n) {
	// std::vector<int> _tab;
}
Span::Span(Span const& cpy) {
	_copy(cpy);
	*this = cpy;
}
Span::~Span(void) {
}
//--------------------------------

//-----------Operators------------
void Span::_delete() {
}
void Span::_copy(Span const & copy) {
	std::vector<int> _tab(copy._tab);
}
Span & Span::operator=(Span const & src) {
	_delete();
	_copy(src);
	return *this;
}
//--------------------------------

//--------Getters/Setters---------
//--------------------------------

//------------Functions-----------
void Span::addNumber(int add) {
	if (_tab.size() >= _size)
		throw SpanFullExcpetion("The span is full.");
	_tab.push_back(add);
}
int Span::shortestSpan() {
	if (_tab.size() < 2)
		throw NoDistanceExcpetion("The number of numbers added is insufficient.");
	std::vector<int>::iterator	it = _tab.begin();
	std::vector<int>::iterator itbis;
	int scale = *it;
	it++;
	int next = *it;
	it--;
	scale -= next;
	while (it != _tab.end()) {
		itbis = it;
		while (++itbis != _tab.end()) {
			if ((*it - *itbis) < scale && (*it - *itbis) > 0)
				scale = *it - *itbis;
			else if ((*itbis - *it) < scale && (*itbis - *it) > 0)
				scale = *itbis - *it;
		}
		it++;
	}
	return scale;
}
int Span::longestSpan() {
	if (_tab.size() < 2)
		throw NoDistanceExcpetion("The number of numbers added is insufficient.");
	return *std::max_element(_tab.begin(), _tab.end()) \
			- *std::min_element(_tab.begin(), _tab.end());
}
//--------------------------------