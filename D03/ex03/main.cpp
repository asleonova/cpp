/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:22:07 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/20 22:00:30 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "ClapTrap.Class.hpp"
#include "NinjaTrap.hpp"
#include <unistd.h>

void test1(void)
{
    FragTrap robotF("Trump");
    ScavTrap robotS("Putin");
    NinjaTrap robotN("Ninja");
    robotS.rangedAttack(robotF.getName());
    sleep(1);
    robotF.takeDamage(20);
    sleep(1);
    robotF.meleeAttack(robotS.getName());
    sleep(1);
    robotS.takeDamage(30);
    sleep(1);
    robotF.vaulthunter_dot_exe(robotS.getName());
    sleep(1);
    robotF.vaulthunter_dot_exe(robotS.getName());
    sleep(1);
    robotF.vaulthunter_dot_exe(robotS.getName());
    sleep(1);
    robotS.challengeNewComer();
    sleep(1);
    robotS.challengeNewComer();
    sleep(1);
    robotS.challengeNewComer();
    sleep(1);
    robotN.ninjaShoebox(robotF);
    sleep(1);
    robotN.ninjaShoebox(robotS);
    sleep(1);
    robotN.ninjaShoebox(robotN);
}

void test2(void)
{
    FragTrap robotF("Trump");
    ScavTrap robotS("Putin");
    NinjaTrap robotN("Ninja");
    for (int i = 0; i < 5; i++)
    {
        std::cout << "\x1b[0;31mFlagTrap secret attack:\x1b[0m " << std::endl;
        robotF.vaulthunter_dot_exe(robotF.getName());
        std::cout << "\x1b[0;31mScavTrap secret attack:\x1b[0m " << std::endl;
        robotS.challengeNewComer();
        std::cout << "\x1b[0;31mScavTrap secret attack:\x1b[0m " << std::endl;
        robotN.ninjaShoebox(robotF);
        sleep(1);
    }
}

void test3(void)
{
    FragTrap robotF("Trump");
    ScavTrap robotS("Putin");
    NinjaTrap robotN("Ninja");
    std::cout << "\x1b[1;32mFragTrap before beRepaired set to more than max(150):\x1b[0m " << robotF << std::endl;
    robotF.beRepaired(150);
    std::cout << "\x1b[1;31mFragTrap after beRepaired set to more than max(150):\x1b[0m " << robotF << std::endl;
    std::cout << "\x1b[1;32mScavTrap before beRepaired set to more than max(150):\x1b[0m " << robotS << std::endl;
    robotS.beRepaired(150);
    std::cout << "\x1b[1;31mScavTrap after beRepaired set to more than max(150):\x1b[0m " << robotS << std::endl;
    std::cout << "\x1b[1;32mNinjaTrap before beRepaired set to more than max(150):\x1b[0m " << robotN << std::endl;
    robotN.beRepaired(150);
    std::cout << "\x1b[1;31mNinjaTrap after beRepaired set to more than max(150):\x1b[0m " << robotN << std::endl;
 
}

void test4(void)
{
    FragTrap robotF("Erlick");
    ScavTrap robotS("Erlick");
    NinjaTrap robotN("Erlick");
    std::cout << "\x1b[1;32mTesting FragTrap\x1b[0m " << std::endl;
    FragTrap robotFClone(robotF);
    FragTrap robotFCopy("Copy");
    robotFCopy = robotF;
    robotF.vaulthunter_dot_exe(robotS.getName());
    sleep(1);
    robotFCopy.vaulthunter_dot_exe(robotS.getName());
    sleep(1);
    robotFClone.vaulthunter_dot_exe(robotS.getName());
    sleep(2);
    std::cout << "\x1b[1;32mTesting ScavTrap\x1b[0m " << std::endl;
    ScavTrap robotSClone(robotS);
    ScavTrap robotSCopy("Copy");
    robotSCopy = robotS;
    robotS.challengeNewComer();
    sleep(1);
    robotSCopy.challengeNewComer();
    sleep(1);
    robotSClone.challengeNewComer();
    sleep(2);
    std::cout << "\x1b[1;32mTesting NinjaTrap\x1b[0m " << std::endl;
    NinjaTrap robotNClone(robotN);
    NinjaTrap robotNCopy("Copy");
    robotNCopy = robotN;
    robotN.ninjaShoebox(robotS);
    sleep(1);
    robotNCopy.ninjaShoebox(robotF);
    sleep(1);
    robotNClone.ninjaShoebox(robotN);
}

int main(void)
{
    std::cout << "\x1b[5;36mBASIC TEST STARTED!\x1b[0m" << std::endl;
    test1();
    std::cout << "\x1b[1;32mBASIC TEST DONE!\x1b[0m" << std::endl << std::endl;
    sleep(5);
    std::cout << "\x1b[5;36mENERGY TEST STARTED!\x1b[0m" << std::endl;
    test2();
    std::cout << "\x1b[1;32mENERGY TEST DONE!\x1b[0m" << std::endl << std::endl;
    sleep(5);  
    std::cout << "\x1b[5;36mMAX_HEALING TEST STARTED!\x1b[0m" << std::endl;
    // test3();
    std::cout << "\x1b[1;32mMAX_HEALING TEST DONE!\x1b[0m" << std::endl << std::endl;
    sleep(5);
    std::cout << "\x1b[5;36mCONSTRUCTOR TEST STARTED!\x1b[0m" << std::endl;
    test4();
    std::cout << "\x1b[1;32mCONSTRUCTOR TEST DONE!\x1b[0m" << std::endl << std::endl;
    return 0;  
}