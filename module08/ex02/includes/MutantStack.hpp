#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

//	le = veut dire : si je te dis pas quel type cest ca sera deque par defaut

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {

	public :
		MutantStack(){};
		MutantStack(MutantStack const & src){*this = src;};
		virtual ~MutantStack(){};

		MutantStack &	operator=(MutantStack const & src) {
			this->c = src.c;
			return *this;
		};

		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};
		const_iterator begin() const {return this->c.begin();};
		const_iterator end() const {return this->c.end();};
		reverse_iterator rbegin() {return this->c.rbegin();};
		reverse_iterator rend() {return this->c.rend();};
		const_reverse_iterator rbegin() const {return this->c.rbegin();};
		const_reverse_iterator rend() const {return this->c.rend();};

};

//	ca marche aussi comme ci-dessous mais cest mieux de préciser que le container est
//		deque meme si cest celui que stack utilise par defaut.

// template<typename T>
// class MutantStack : public std::stack<T> {
// 	public :
// 		typedef typename std::dequeu<T>::iterator iterator;
// 		typedef typename std::dequeu<T>::const_iterator const_iterator;
// 		typedef typename std::dequeu<T>::reverse_iterator reverse_iterator;
// 		typedef typename std::dequeu<T>::const_reverse_iterator const_reverse_iterator;
// };


// template<typename T>
// class MutantStack : public std::stack<T> {
// 	public :
// 		typedef typename std::stack<T>::container_type::iterator iterator;
// 		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
// 		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
// 		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
// };


#endif