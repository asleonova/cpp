/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:22:21 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 20:25:23 by dbliss           ###   ########.fr       */
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

Squad & Squad::operator=(Squad & const rhs)
{

}

int Squad::getCount() const
{
    return this->_count;
}