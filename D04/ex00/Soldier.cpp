/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Soldier.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:08:58 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 12:22:29 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Soldier.hpp"

Soldier::Soldier(std::string name) : Victim(name)        
{
    this->_name = name;
    std::cout << "I was born." << std::endl;
}

Soldier::Soldier(Soldier const & src) : Victim(src)
{
    std::cout << "Soldier Copy constructor called" << std::endl;
    *this = src;
}

Soldier & Soldier::operator=(Soldier const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return (*this);
}

std::string Soldier::getName(void)
{
    return this->_name;
}

void Soldier::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a \x1b[1;36mblue unicorn!\x1b[0m" << std::endl;
}

Soldier::~Soldier(void)
{
    std::cout << "Pfffff..." << std::endl;
}
