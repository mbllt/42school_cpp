#ifndef whatever_HPP
#define whatever_HPP

#include <iostream>
#include <string>

template<typename T>
T const &	max(T const & x, T const & y) {
	return (y>= x ? y : x);
}

#endif