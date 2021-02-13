/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:24:17 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 21:21:43 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <unistd.h>

ZombieHorde::ZombieHorde(int N)
{
    this->N = N;
    this->zombies = new Zombie[N];
    std::string tipes[3] = {"Dead", "Alive", "Savage"};
    srand(time(0));
    std::string names[10] = {"Walker", "Geek", "Lurk", "Angry", "Ugly", "Zed", "Rottie", "Undead", "Sour", "Nasty"};
    for (int i = 0; i < this->N; i++)
    {
        int j = rand() % 10;
        this->zombies[i] = Zombie(names[j], tipes[rand() % 3]); 
    }
    
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->zombies;
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->N; i++)
    {
        sleep(1);
        this->zombies[i].announce();
    }
    
}
