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
		ShrubberyCreationForm Form1("targetJardin");		
		Form1.beSigned(boss);
		boss.executeForm(Form1);
		
		std::cout << "\n------------------------------\n\n";
		
		RobotomyRequestForm Form2("targetPlante");
		Form2.beSigned(boss);
		boss.executeForm(Form2);

		std::cout << "\n------------------------------\n\n";

		PresidentialPardonForm Form3("targetPlanete");
		Form3.beSigned(boss);
		boss.executeForm(Form3);

		std::cout << "\n\n------------------------------\n\n";
	}
	catch (const ShrubberyCreationForm::GradeTooLowException& e) {
		std::cerr << "Catched a GradeTooLowException : " << '\n';
		std::cerr << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

