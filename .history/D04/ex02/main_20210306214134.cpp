/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:00:08 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 21:41:34 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

#include <unistd.h>

void basicTest(void)
{
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;
    ISquad *vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
}

void advancedTest(void)
{
    std::cout << "Creating Marines" << std::endl;
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;
    std::cout << "Creating new Squad" << std::endl;
    ISquad *vlc = new Squad;
    std::cout << "Trying to push 2 marines to Squad" << std::endl;
    vlc->push(bob);
    vlc->push(jim);
    std::cout << "Trying to push null marine to Squad (shouldn't work)" << std::endl;
    vlc->push(0);
    std::cout << "Creating and pushing existing marine to Squad (no diff from basic test output)" << std::endl;
    vlc->push(bob);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "Creating a clone of bob" << std::endl;
    ISpaceMarine *bobClone = bob->clone();
    std::cout << "Trying attacks from bobClone" << std::endl;
    bobClone->battleCry();
    bobClone->rangedAttack();
    bobClone->meleeAttack(); 
    delete vlc;

}

int main()
{
    std::cout << "\x1b[5;36mBASIC TEST STARTED!\x1b[0m" << std::endl;
    basicTest();
    std::cout << "\x1b[1;32mBASIC TEST DONE!\x1b[0m" << std::endl
              << std::endl;
    std::cout << "\x1b[5;36mADVANCED TEST STARTED!\x1b[0m" << std::endl;
    advancedTest();
    std::cout << std::endl
              << "\x1b[1;32mADVANCED TEST DONE!\x1b[0m" << std::endl
              << std::endl;

    return 0;
}
