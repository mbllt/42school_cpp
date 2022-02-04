#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {
	try
	{
		std::cout << "\n------------------------------\n\n";

		Bureaucrat boss("BOSS", 1);
		ShrubberyCreationForm Form1("Form1", "targetJardin");		
		Form1.beSigned(boss);		// Form1 demande a boss pour etre signe
		Form1.execute(boss);		// execute car form signer
		
		std::cout << "\n------------------------------\n\n";
		
		RobotomyRequestForm Form2("Form2", "targetPlante");
		Form2.beSigned(boss);
		Form2.execute(boss);

		std::cout << "\n------------------------------\n\n";

		PresidentialPardonForm Form3("Form3", "targetPlanete");
		Form3.beSigned(boss);
		Form3.execute(boss);

		std::cout << "\n\n------------------------------\n\n";
	}
	catch (const ShrubberyCreationForm::GradeTooLowException& e) {
		std::cerr << "Catched a GradeTooLowException from ShrubberyCreationForm: " << '\n';
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

//	I might need to use executeForm in the main rather than execute
