/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:22:21 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 20:52:43 by dbliss           ###   ########.fr       */
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

ISpaceMarine* Squad::getUnit(int num) const
{
    if (num > this->_count || num < 0)
        return nullptr;
    return(marines[num]);    
}

int Squad::push(ISpaceMarine *newMarine) const
{
    if (newMarine == nullptr)
        return (this->_count);
    for (int i = 0; i < this->_count; i++)
    {
        if (marines[i] == newMarine)
            return(this->_count);
    }
    ISpaceMarine **tmp = new ISpaceMarine *[this->_count + 1];
    int i;
    for (i = 0; i < this->_count; i++)
    {
        tmp[i] = marines[i];
        delete marines[i];
    }
    delete [] marines;
    tmp[i] = newMarine;
    this->marines = tmp;    
    this->_count += 1;
    return (this->_count);
    
}