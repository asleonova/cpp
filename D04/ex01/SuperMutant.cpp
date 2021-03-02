/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:52:13 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 15:05:43 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src)
{
    *this = src;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
    Enemy::operator=(rhs);
    return (*this);
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
    if (amount < 3)
        amount = 0;
    else 
        amount -= 3;
    Enemy::takeDamage(amount);
}