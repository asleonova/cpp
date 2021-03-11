/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:22:21 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 20:35:35 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), marines(nullptr)
{

}

Squad::~Squad()
{
    for (int i = 0; i < this->_count; i++)
        delete marines[i];
    delete [] marines;
}

Squad::Squad(Squad const & src)
{
    *this = src;
}

Squad & Squad::operator=(Squad const & rhs)
{
    if (this != & rhs)
    {
        for (int i = 0; i < this->_count; i++)
            delete marines[i];
        delete [] this->marines;
        ISpaceMarine **tmp = new ISpaceMarine *[rhs._count]; // probably + 1
        for (int i = 0; i < rhs._count; i++)
        {
            tmp[i] = rhs.marines[i];
        }
        this->marines = tmp;
        this->_count = rhs._count;
    }
    return (*this);
}

int Squad::getCount() const
{
    return this->_count;
}