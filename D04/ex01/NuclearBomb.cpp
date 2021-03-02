/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NuclearBomb.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:35:39 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 18:38:42 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NuclearBomb.hpp"

NuclearBomb::NuclearBomb(): AWeapon("Nuclear Bomb", 30, 80)
{    
}

NuclearBomb::NuclearBomb(NuclearBomb const & src) : AWeapon(src)
{
    *this = src;
}

NuclearBomb & NuclearBomb::operator=(NuclearBomb const & rhs)
{
    AWeapon::operator=(rhs);
    return(*this);
}

NuclearBomb::~NuclearBomb()
{

}

void NuclearBomb::attack() const
{
    std::cout << "* BOOOOM! *" << std::endl;
}