#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array {
	private :
		T *				_tab;
		unsigned int	_n;

	public :
		Array() : _n(0) {_tab = new T;_tab = NULL;}
		Array(unsigned int n) : _n(n) {_tab = new T[n]; ft_bzero();}
		Array(Array const & cpy) {*this = cpy;}
		~Array() {delete [] _tab;};

		Array & operator=(Array const & src) {
			_tab = new T[src.size()];
			_n = src._n;
			for (unsigned int i = 0; i < _n; i++)
				_tab[i] = src._tab[i];
			return *this;
			}
		
		T & operator[](const unsigned int index) {
			if (index >= this->size())
				throw AccessorArrayInvalidExcpetion("Index to access array is invalid.");
			return _tab[index];
		}

		unsigned int	size() const {return _n;}

		void	ft_bzero() {for (unsigned int i = 0; i < _n; i++) _tab[i] = 0;}

		void	display(const unsigned int index) const {
			if (index >= this->size())
				throw AccessorArrayInvalidExcpetion("Index to access array is invalid.");
			std::cout << _tab[index] << " ";
		}

		class AccessorArrayInvalidExcpetion : public std::exception {
		
			private :

				std::string		_messageErr;

			public :
		
				AccessorArrayInvalidExcpetion(std::string std) throw() : _messageErr(std) {};
				virtual ~AccessorArrayInvalidExcpetion() throw() {};
		
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};
};

#endif