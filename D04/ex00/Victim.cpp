/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:09:43 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 12:09:47 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
    std::cout << "Victim Copy constructor called" << std::endl;
    *this = src;
}

Victim & Victim::operator=(Victim const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return (*this);
}

std::string Victim::getName(void) const
{
    return this->_name;
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
    o << "I am " << rhs.getName();
    o << " and I like otters!";
    o << std::endl;
    return o;
}

