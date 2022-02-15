#include <iostream>
#include <string>
#include "iter.hpp"

//	J'ai un tableau et une fonction qui va s'appliquer sur chacun
//			des éléments de mon tableau. Faut gérer 4 cas différents :
//
//		1.tableau muable/fonction qui prend des éléments muables.
//		2.tableau const/fonction qui prend des éléments muables.
//		3.tableau muable/fonction qui prend des éléments const.
//		4.tableau const/fonction qui prend des éléments const.
//
//	1. Mon template GÉNÉRIQUE est ok car mes T sont tous les deux du meme type.
//			D'ailleurs, il est aussi ok pour le cas 4 car la converison peut
//			se faire de manière implicite.
//
//	2. Ce cas de figure est impossible : on ne peut pas modifier des const.
//
//	3. J'ai créé un template SPECIALISÉ exprès. J'aurais pu copier/coller
//			le code mais je lance le template générique en castant mon tableau
//			en const pour que mes deux éléments T est le même type sinon ça
//			n'aurait pas marché.
//
//	4. Mon template GÉNÉRIQUE : il marche comme le premier cas.

template <typename U>
void	displayTab(U *tab, int const size) {
	std::cout << "tab int : ";
	for (int i = 0; i < size; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
}

void	plusOneInt(int &nbr) {
	nbr++;
}

void	plusOneIntConst(const int &nbr) {
	std::cout << "nbr : " << nbr << std::endl;
}

void	plusOneFloat(float &nbr) {
	nbr++;
}

int	main(void) {

	std::cout << "---------- INT ----------" << "\n\n";
	
	std::cout << "\n--> Tableau muable/fonction qui prend des éléments muables : utilise le template générique :" << "\n";
	int	tabInt[] = {1, 2, 3, 4, 5};
	displayTab(tabInt, 5);
	::iter(tabInt, 5, &plusOneInt);
	displayTab(tabInt, 5);

	std::cout << "\n--> Tableau muable/fonction qui prend des éléments const : utilise le template spécialisé :" << "\n";
	::iter(tabInt, 5, &plusOneIntConst);

	std::cout << "\n--> Tableau const/fonction qui prend des éléments const : utilise le template générique :" << "\n";
	const int	tabIntConst[] = {1, 2, 3, 4, 5};
	::iter(tabIntConst, 5, &plusOneIntConst);

	std::cout << "\n--------- FLOAT ---------" << "\n\n";
	float	tabFloat[] = {1, 2, 3, 4, 5};
	displayTab(tabFloat, 5);
	::iter(tabFloat, 5, &plusOneFloat);
	displayTab(tabFloat, 5);

	return 0;
}