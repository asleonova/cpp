/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:24:04 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 21:06:04 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
    int N;
   // std::string zombie_type;
    Zombie *zombies;
public:
    ZombieHorde(int n);
    void announce(void);
    //void setZombieType(std::string type);
    //Zombie* newZombie(std::string name);
    //Zombie* randomChump(void);
    ~ZombieHorde();

};

#endif

