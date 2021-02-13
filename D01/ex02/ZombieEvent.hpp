/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:53:30 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 20:21:20 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string zombie_type;
public:
    ZombieEvent();
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie* randomChump(void);
    ~ZombieEvent();

};

#endif

