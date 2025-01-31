/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:08:28 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 12:22:32 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) : Victim(src)
{
    std::cout << "Peon Copy constructor called" << std::endl;
    *this = src;
}

Peon & Peon::operator=(Peon const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return (*this);
}

std::string Peon::getName(void)
{
    return this->_name;
}

void Peon::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a \x1b[1;35mpink pony!\x1b[0m" << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}