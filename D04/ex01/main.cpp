/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:31:49 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/03 16:01:54 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "Character.hpp"
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "CrazyPony.hpp"
#include "NuclearBomb.hpp"
#include "SuperMutant.hpp"

#include <unistd.h>

void basicTest(void)
{
    Character *me = new Character("me");
    std::cout << *me;
    Enemy *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    delete me;
    delete pr;
    delete pf;
}

void advancedTest(void)
{
    std::cout << "\x1b[1;32mCreating a character Wow, with the 3 enemies and 3 weapons\x1b[0m" << std::endl;
    Character *wow = new Character("Wow");
    std::cout << *wow;
    Enemy *scorpio = new RadScorpion();
    Enemy *pony = new CrazyPony();
    Enemy *mutant = new SuperMutant();
    PlasmaRifle pr;
    PowerFist pf;
    NuclearBomb nb;
    
    std::cout << "\x1b[1;32mCreating a copies of everybody to test out copy constructor\x1b[0m" << std::endl;
    Character *wow1 = new Character(*wow);
    std::cout << *wow;
    Enemy *sc1 = new Enemy(*scorpio);
    Enemy *pn1 = new Enemy(*pony);
    Enemy *mt1 = new Enemy(*mutant);
    PlasmaRifle pr1(pr);
    PowerFist pf1(pf);
    NuclearBomb nb1(nb);
    std::cout << "Waiting ..." << std::endl;
    sleep(1);
    std::cout << "Waiting ..." << std::endl;
    sleep(1);
    std::cout << "Waiting ..." << std::endl;
    sleep(1);
    std::cout << "\x1b[1;32mEverybody has been successfully copied!\x1b[0m" << std::endl << std::endl;
    
    std::cout << "\x1b[1;32mTesting fuctionality!\x1b[0m" << std::endl << std::endl;
    std::cout << "\x1b[1;34mEquiping Wow with a weapon Plasma Rifle\x1b[0m" << std::endl;
    wow->equip(&pr);
    std::cout << "\x1b[1;34mTesting Wow with too low AP level (can't attack):\x1b[0m" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        wow->attack(scorpio);
        wow->attack(pony);
    }
    wow->attack(pony);
    std::cout << "\x1b[1;34mTesting Wow1 without a weapon (can't attack)\x1b[0m" << std::endl;
    std::cout << *wow1;
    wow1->attack(mutant);

    std::cout << "\x1b[1;34mEquiping Wow1 with a weapon Nuclear bomb\x1b[0m" << std::endl;
    wow1->equip(&nb);
    std::cout << *wow1;
    wow1->attack(mutant);

    std::cout << "\x1b[1;34mRecover AP of our firstly created character (20): \x1b[0m" << std::endl; 
    for (int i = 0; i < 2; i++)
        wow->recoverAP();
    std::cout << *wow;
    std::cout << "\x1b[1;34mGiving  little bit more recover AP than needed (30), still should be 40 max: \x1b[0m" << std::endl; 
    for (int i = 0; i < 3; i++)
        wow->recoverAP();
    std::cout << *wow;
    delete wow;
    delete mutant;
    delete wow1;
    delete sc1;
    delete pony;
    delete pn1;
    delete mt1;
}

int main()
{
    std::cout << "\x1b[5;36mBASIC TEST STARTED!\x1b[0m" << std::endl;
    basicTest();
    std::cout << "\x1b[1;32mBASIC TEST DONE!\x1b[0m" << std::endl << std::endl;
    std::cout << "\x1b[5;36mADVANCED TEST STARTED!\x1b[0m" << std::endl;
    advancedTest();
    std::cout << std::endl << "\x1b[1;32mADVANCED TEST DONE!\x1b[0m" << std::endl << std::endl;

    return 0;
}
