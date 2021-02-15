/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:22:44 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 20:47:35 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string& Weapon::getType(void) const
{
    return(this->_type);
}