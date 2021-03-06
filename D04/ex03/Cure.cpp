/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 11:33:01 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 17:01:10 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(Cure const & src) : AMateria(src)
{
    *this = src;
}

Cure & Cure::operator=(Cure const & rhs)
{
    AMateria::operator=(rhs);
    return (*this);
}

AMateria* Cure::clone() const
{
    return new Cure(*this); 
}

void Cure::use(ICharacter & target)
{
    std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}