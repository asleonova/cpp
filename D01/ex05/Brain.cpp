/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:09:32 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 15:59:48 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain()
{
}

int Brain::getIq() const
{
    return (this->_iq);
}

int Brain::getSize() const
{
    return (this->_size);
}

void Brain::setIq(int iq)
{
    this->_iq = iq;
}

void Brain::setSize(int size)
{
    this->_size = size;
}

std::string Brain::identify(void) const
{
    std::stringstream buf;
    buf << this;
    std::string result = buf.str();
    return (result);
}

Brain::~Brain()
{
}
