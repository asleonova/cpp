/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:22:07 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/01 16:14:16 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <unistd.h>

void test(void)
{
    SuperTrap super("Super");
    super.rangedAttack(super.getName());
    super.vaulthunter_dot_exe(super.getName());
    super.meleeAttack("enemy");
}

void test1(void)
{
    SuperTrap super("Macron");
    ScavTrap scav("Putin");
    FragTrap frag("Trump");
    NinjaTrap ninja("Xi");

    super.rangedAttack(scav.getName());
    sleep(1);
    super.meleeAttack(frag.getName());
    sleep(1);
    super.ninjaShoebox(ninja);
    sleep(1);
    super.ninjaShoebox(scav);
    sleep(1);
    super.ninjaShoebox(frag);
    sleep(1);
    super.vaulthunter_dot_exe(scav.getName());
    sleep(1);
    super.vaulthunter_dot_exe(frag.getName());
    sleep(1);
    std::cout << "Current hp level: " << super << std::endl;
    super.beRepaired(10);
    std::cout << "hp level after .beRepaired(10) func: " << super << std::endl;
    frag.meleeAttack(super.getName());
    std::cout << "Current hp level of SuperTrap: " << super << std::endl;
    super.beRepaired(10);
    std::cout << "hp level after .beRepaired(10) func: " << super << std::endl;
    sleep(1);
    for (int i = 0; i < 5; i++)
        super.vaulthunter_dot_exe(frag.getName());
}

void test2(void)
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

int main(void)
{
    std::cout << "\x1b[5;36mBASIC TEST STARTED!\x1b[0m" << std::endl;
    test();
    std::cout << "\x1b[1;32mBASIC TEST DONE!\x1b[0m" << std::endl << std::endl;
    sleep(5);
    std::cout << "\x1b[5;36mSUPERTRAP ALL ATTACKS TEST!\x1b[0m" << std::endl;
    test1();
    std::cout << "\x1b[1;32mSUPERTRAP ALL ATTACKS TEST DONE!\x1b[0m" << std::endl << std::endl;
    sleep(5);
    std::cout << "\x1b[5;36mTESTING SCAVTRAP, FRAGTRAP, NINJATRAP!\x1b[0m" << std::endl;
    test2();
    std::cout << "\x1b[1;32mSCAVTRAP, FRAGTRAP, NINJATRAP TEST DONE!\x1b[0m" << std::endl << std::endl;
    sleep(5);  
    return 0;  
}