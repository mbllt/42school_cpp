#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

//--------- Template générique ---------
template<typename T>
void	iter(T *tab, unsigned int size, void (*f)(T &)) {
	for (unsigned int i = 0; i < size; i++)
		f(tab[i]);
}

//--------- Template spécialisé ---------
template<typename T>
void	iter(T *tab, unsigned int size, void (*f)(T const &)) {
	::iter(const_cast<T const*>(tab), size, f);
}

#endif