/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:12:35 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/09 16:13:22 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void basicTest()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    Character *rob = new Character("rob");
    rob->equip(tmp);
    Character *rob1 = new Character(*rob);
    rob->use(0, *rob1);
    rob1->use(0, *rob);
    
    
   // ICharacter *bob = new Character("bob");
   // me->use(0, *bob);
   // me->use(1, *bob);
    //delete bob;
    //delete me;
    //delete src;
}

void advancedTest()
{
    IMateriaSource *src = new MateriaSource();
    std::cout << "Creating 4 materias from learnMateria" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    //Character anna("anna");
    std::cout << "Creating a Character 'me'" << std::endl;
    ICharacter *me = new Character("me");
    std::cout << "Creating an inctance of AMateria tmp" << std::endl;
    AMateria *tmp;
    std::cout << "Assigning tmp to different materias in out Materia Source" << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << "Unequip one of the materias" << std::endl;
    delete me->getMateria(2);
    me->unequip(2);
    std::cout << "Unequip unexisting materias" << std::endl;
    me->unequip(19);
    std::cout << "Trying to assign materia name which doesn't exist - should return null" << std::endl;
    tmp = src->createMateria("hello");
    
    std::cout << "Creating new character 'bob'" << std::endl;
    ICharacter *bob = new Character("bob");

    std::cout << "Use the materias for our characters (can't use 3rd because we deleted it, so only 3 messages should appear: 0, 1, 2)" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    delete bob;
    delete me;
    delete src;
}

int main()
{
    std::cout << "\x1b[5;36mBASIC TEST STARTED!\x1b[0m" << std::endl;
    basicTest();
    std::cout << "\x1b[1;32mBASIC TEST DONE!\x1b[0m" << std::endl << std::endl;
    std::cout << "\x1b[5;36mADVANCED TEST STARTED!\x1b[0m" << std::endl;
   // advancedTest();
    std::cout << std::endl << "\x1b[1;32mADVANCED TEST DONE!\x1b[0m" << std::endl << std::endl;
    return 0;
}