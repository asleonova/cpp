/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:09:41 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 16:10:16 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}


std::string Human::identify(void)
{
    return (this->_brain.identify());
}

const Brain &Human::getBrain(void) const
{
    return (this->_brain);
}
