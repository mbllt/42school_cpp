#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main(void) {

ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");
    //Depassement de stockage sur materiasource 
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    //Depassement de stockage sur character
    //
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    //materia inexistante
    tmp = src->createMateria("ice");
    bob->equip(tmp);
    tmp = src->createMateria("cure");
    bob->equip(tmp);
    tmp = src->createMateria("ruissellement ");
    bob->equip(tmp);
//
// test overload =
    Character *eric = new Character("eric");
    Character *copy = new Character("cpy");
    tmp = src->createMateria("ice");
    eric->equip(tmp);
    tmp = src->createMateria("cure");
    eric->equip(tmp);
    tmp = src->createMateria("cure");
    copy->equip(tmp);
    tmp = src->createMateria("ice");
    copy->equip(tmp);
    tmp = src->createMateria("cure");
    copy->equip(tmp);
    *eric = *copy;
    delete copy;

    std::cout<<"ERIC VS BOB !\n";
    eric->use(0, *bob);
    eric->use(1, *bob);
//test de base
    std::cout<<"ME VS BOB !\n";
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete src;
    delete eric;
    return 0;
}
