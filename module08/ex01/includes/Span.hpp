#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class Span {
	private :

		std::vector<int>	_tab;
		unsigned int		_size;

		void	_delete();
		void	_copy(Span const & copy);


	public :
		Span();
		Span(unsigned int n);
		Span(Span const & cpy);
		~Span();

		Span & operator=(Span const & src);

		void	addNumber(int add);
		int		shortestSpan() const;
		int		longestSpan() const;

		class SpanFullExcpetion : public std::exception {
			private :
				std::string		_messageErr;
			public :
				SpanFullExcpetion(std::string std) throw() : _messageErr(std) {};
				virtual ~SpanFullExcpetion() throw() {};
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};
		class NoDistanceExcpetion : public std::exception {
			private :
				std::string		_messageErr;
			public :
				NoDistanceExcpetion(std::string std) throw() : _messageErr(std) {};
				virtual ~NoDistanceExcpetion() throw() {};
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};
};

#endif