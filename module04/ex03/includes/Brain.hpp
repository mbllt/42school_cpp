#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

	public:
		
		Brain(void);
		Brain(Brain const& cpy);
		virtual ~Brain(void);

		Brain&				operator=(Brain const & src);

		std::string			getIdea(int nb) const;
		void				setIdea(int nb, std::string str);
		void				displayIdeas() const;


	protected:

		std::string			_ideas[100];


};

#endif