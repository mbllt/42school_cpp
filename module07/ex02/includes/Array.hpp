#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array {
	private :
		T *				_tab;
		unsigned int	_size;

		void	_delete() {
			delete [] _tab;
		}

		void	_copy(Array const & copy) {
			_tab = new T[copy._size];
			_size = copy._size;
			for (unsigned int i = 0; i < _size; i++)
				_tab[i] = copy._tab[i];
		}

	public :
		Array() : _size(0) {_tab = new T;}	// do i malloc ?
		Array(unsigned int n) : _size(n) {_tab = new T[n];}
		Array(Array const & cpy) {_copy(cpy);}
		~Array() {_delete();};

		Array & operator=(Array const & src) {
			_delete();
			_copy(src);
			return *this;
			}
		
		T & operator[](const unsigned int index) {
			if (index >= this->_size)
				throw AccessorArrayInvalidExcpetion("Index to access array is invalid.");
			return _tab[index];
		}

		T const & operator[](const unsigned int index) const {
			T & ret = const_cast<Array &>(*this).operator[](index);
			return const_cast<T const &>(ret);
		}

		unsigned int	size() const {return _size;}

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