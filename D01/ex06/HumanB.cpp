/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:22:34 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 21:08:12 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{   
    this->_name = name;
}


void HumanB::setWeapon(Weapon &weaponType)
{
    this->_weapon = &weaponType;
}

void HumanB::attack(void)
{
    std::cout <<  this->_name  << " \033[1;31mattacks with his\033[0m " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}
