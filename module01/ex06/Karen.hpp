#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <cstdlib>
#include <iostream>

class Karen {

	public:

		Karen (void);
		~Karen (void);

		void	logLevel (std::string level);


	private:

		void	debug (void);
		void	info (void);
		void	warning (void);
		void	error (void);


};

#endif