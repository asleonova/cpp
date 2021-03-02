/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:35:39 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 13:26:09 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{    
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src)
{
    *this = src;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
    AWeapon::operator=(rhs);
    return(*this);
}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}