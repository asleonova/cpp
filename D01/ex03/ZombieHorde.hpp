/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:24:04 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/17 14:13:46 by dbliss           ###   ########.fr       */
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
    Zombie *zombies;
public:
    ZombieHorde(int n);
    void announce(void);
    ~ZombieHorde();

};

#endif

