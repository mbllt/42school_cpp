#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array {
	private :
		T *	_tab;

	public :
		Array() {_tab = new T;}
		Array(unsigned int n) {_tab = new T[n];}
		Array(Array const & cpy) {*this = cpy;}
		~Array();

		Array & operator=(Array const & src) {
			_tab = new T[src.size()];

			for (int i = 0; i < src.size(); i++)
				_tab[i] = src._tab[i];
			return *this;
			}
		
		Array & operator[](const unsigned int index) {
			if (index >= this->size())
				throw AccessorArrayInvalidExcpetion("Index to access array is invalid.");
			return _tab[index];
		}

		unsigned int	size() const {
			return sizeof(_tab)/sizeof(_tab[0]);
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