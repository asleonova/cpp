/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:30:24 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/04 18:49:40 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(Ice const & src) : AMateria(src)
{
    *this = src;
}

Ice & Ice::operator=(Ice const & rhs)
{
    AMateria::operator=(rhs);
    return (*this);
}

AMateria* Ice::clone() const
{
    return new Ice(*this); 
}

void Ice::use(ICharacter & target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}