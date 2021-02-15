/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:22:25 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 21:01:14 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponType) : _weapon(weaponType)
{
    this->_name = name;
}

void HumanA::attack(void)
{
    std::cout <<  this->_name  << " \033[1;31mattacks with his\033[0m " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
