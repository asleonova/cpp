/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 19:12:35 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/04 19:56:41 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
    //IMateriaSource *src = new MateriaSource();
    //src->learnMateria(new Ice());
    //src->learnMateria(new Cure());
    AMateria *a = new Ice();
    ICharacter *me = new Character("me");
    AMateria *tmp;
    //tmp = src->createMateria("ice");
    me->equip(tmp);
    //tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    //delete src;
    return 0;
}