/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:53:38 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 20:16:10 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <unistd.h>

int main(void)
{
    ZombieEvent zombieEvent;
    Zombie *zombie;

    std::cout << "\033[1;35mCreating zombies:\033[0m" << std::endl;
    std::string tipes[3] = {"Dead", "Alive", "Savage"};
    for (size_t i = 0; i < 6; i++)
    {
        zombieEvent.setZombieType(tipes[rand() % 3]);
        zombie = zombieEvent.randomChump();
        delete zombie;
    }
    //sleep(100);
}