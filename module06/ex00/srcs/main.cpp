//		------------------------------------------------
//
//				TYPE DE CONVERISON DE CAST:
//
//		Conversion :
//			- implicite, explicite avec les paranthèses.
//			- double, float : précis.
//			- int : général.
//			- les bits sont réorganisés.
//	
//		Réinterprétation :
//			- avec les addreses. Implicite, explicite.
//			- void * le plus général.
//			- les bits ne sont pas réorganisés.
//	
//		Qualifier Reinterpretation :
//			- qualifier = const, vollatil.
//			- const plus général.
//	
//		UpCast et DownCast :
//			- classes mères plus générales.
//			- classes filles plus précises.
//
//		------------------------------------------------
//
//							CASTS:
//				ex : const_cast<type>(variable).
//
//		Static Cast :
//			- comme les () en c mais là pour le cpp.
//			- peut faire des converisons et des up, down casts.
//			- empêche les up, down casts entre classes non parentés.
//
//		Dynamic Cast :
//			- le seul cast qui se fait au runtime, à l'éxécution donc,
//				ça peut compiler et péter pendant l'éxécution.
//			- on peut l'utiliser que dans le cas d'une instance polymorphisme :
//				au moins une des fonctions membres virtual.
//			- on l'utilse que en down cast, il va vérifier qu'on peut le faire.
//
//		Reinterpret cast :
//			- ultra permissif : reinterpreter n'importe quellle addresse
//				vers n'importe quelle autre adresse. Attention.
//
//		Const Cast :
//			- permet de reinterpreter le qualifer : const.
//
//		------------------------------------------------
//
//							BONUS:
//
//		Cast Operators :
//			- permet de défénir des opérateurs dans une classe
//				 pour faire conversion implicite de la classe vers un autre type.
//			- syntaxe : operator type() {return static_cast<type>(this->var);}
//
//		Implicit Keybord :
//			- le mot clé 'explicit' devant le constructeur
//				permet d'interdire l'utilisation implicite d'un constructeur.
//
//		------------------------------------------------

#include "scalaire.hpp"

void	displayType(t_type type) {
	switch (type) {
		case (_char):
			std::cout << "TYPE = char." <<std::endl;
			break;
		case (_int):
			std::cout << "TYPE = int." <<std::endl;
			break;
		case (_float):
			std::cout << "TYPE = float." <<std::endl;
			break;
		case (_double):
			std::cout << "TYPE = double." <<std::endl;
			break;
		default:
			std::cout << "TYPE = other." <<std::endl;
	}
}

int	main(int argc, char **argv) {
	try {
		if (argc != 2)
			throw InvalidInputException("Number of args invalid.");
		t_type type = parsing(argv[1]);
		displayType(type);
		std::cout << "\n-------------------------------\n" << std::endl;
		convert(argv[1], type);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
