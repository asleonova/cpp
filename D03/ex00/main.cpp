/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:22:07 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/01 12:37:54 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <unistd.h>

void test1(void)
{
    FragTrap robot("Trump");
    FragTrap robot1("Putin");
    robot1.rangedAttack(robot.getName());
    sleep(1);
    robot.takeDamage(20);
    robot.meleeAttack(robot1.getName());
    sleep(1);
    robot1.takeDamage(30);
    sleep(2);
    robot.vaulthunter_dot_exe(robot1.getName());
    sleep(2); 
    robot1.vaulthunter_dot_exe(robot.getName());
    robot.beRepaired(10);
    robot.beRepaired(10);
}

void test2(void)
{
    FragTrap robot("Trump");
    FragTrap robot1("Putin");
    for (int i = 0; i < 5; i++)
    {
        robot.vaulthunter_dot_exe(robot1.getName());
        sleep(1);
    }
}

void test3(void)
{
    FragTrap robot("Trump");
    std::cout << "\x1b[1;32mbefore beRepaired set to 150:\x1b[0m " << robot << std::endl;
    robot.beRepaired(150);
    std::cout << "\x1b[1;31mafter beRepaired set to 150:\x1b[0m " << robot << std::endl;

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
    test3();
    std::cout << "\x1b[1;32mMAX_HEALING TEST DONE!\x1b[0m" << std::endl << std::endl;
    sleep(5);
    return 0;  
}