/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:31:49 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 20:58:47 by dbliss           ###   ########.fr       */
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
    //Enemy *pony = new CrazyPony();
    //Enemy *mutant = new SuperMutant();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    //AWeapon *nb = new NuclearBomb();
    //wow->equip(pr);
    //wow->equip(pf);
    std::cout << "\x1b[1;32mCreating a character Wow, with the 3 enemies and 3 weapon\x1b[0m" << std::endl;
    
    std::cout << "\x1b[1;32mCreating a copies of everybody to test out copy constructor\x1b[0m" << std::endl;
    Character *wow1 = new Character(*wow);
    // Enemy sc1 = scorpio;
    //Enemy *pn1(pony);
    //Enemy *mt1(mutant);
    AWeapon *pr1 = pr;
    //AWeapon *pf1(pf);
    //AWeapon *nb1(nb);
    std::cout << "\x1b[1;32mEverybody has been successfully copied!\x1b[0m" << std::endl;
    
    std::cout << "\x1b[1;32mTesting fuctionality started!\x1b[0m" << std::endl;
    wow->equip(pr);
    wow->equip(pf);
    wow->attack(scorpio);
//    wow1->attack(sc1);
    //delete wow;
    //delete scorpio;
   // delete pr;
   // delete pf;
    //delete wow1;
    //delete sc1;
    //delete pr1;
}

int main()
{
    std::cout << "\x1b[5;36mBASIC TEST STARTED!\x1b[0m" << std::endl;
    basicTest();
    std::cout << "\x1b[1;32mBASIC TEST DONE!\x1b[0m" << std::endl << std::endl;
    std::cout << "\x1b[5;36mADVANCED TEST STARTED!\x1b[0m" << std::endl;
    advancedTest();
    std::cout << "\x1b[1;32mADVANCED TEST DONE!\x1b[0m" << std::endl << std::endl;

    return 0;
}
