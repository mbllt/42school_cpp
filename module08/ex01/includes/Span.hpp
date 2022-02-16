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
		int		shortestSpan();
		int		longestSpan();

		class SpanFullException : public std::exception {
			private :
				std::string		_messageErr;
			public :
				SpanFullException(std::string std) throw() : _messageErr(std) {};
				virtual ~SpanFullException() throw() {};
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};
		class NoDistanceException : public std::exception {
			private :
				std::string		_messageErr;
			public :
				NoDistanceException(std::string std) throw() : _messageErr(std) {};
				virtual ~NoDistanceException() throw() {};
				virtual const char* what() const throw() {
					return _messageErr.c_str();
				}
		};
};

#endif