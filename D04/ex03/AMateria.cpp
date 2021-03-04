/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:27:21 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/04 20:03:46 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->_xp = rhs._xp;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

unsigned int AMateria::getXP() const
{
    return this->_xp;
}

void AMateria::use(ICharacter &target)
{
    
}
