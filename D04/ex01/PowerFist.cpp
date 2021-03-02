/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:28:29 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 13:31:12 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{    
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src)
{
    *this = src;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
    AWeapon::operator=(rhs);
    return(*this);
}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}