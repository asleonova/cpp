/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:53:21 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 20:13:04 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <unistd.h>

ZombieEvent::ZombieEvent()
{
    this->zombie_type = "Dead";
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type)
{
    this->zombie_type = type;
}

// Creates a zombie with a chosen type, name it and returns it.
Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name, this->zombie_type);
    return (zombie);
}
Zombie *ZombieEvent::randomChump(void)
{
    Zombie *zombie;
    srand(time(0));
    sleep(1);
    int i = rand() % 10;
    std::string names[10] = {"Walker", "Geek", "Lurk", "Angry", "Ugly", "Zed", "Rottie", "Undead", "Sour", "Nasty"};
    zombie = newZombie(names[i]);
    zombie->announce();
    return (zombie);
}
