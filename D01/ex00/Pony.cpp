/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:45:13 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 16:45:16 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
    this->_breed = "test";
    this->_color = "test";
    this->_sex = "test";
}

Pony::Pony(std::string breed, std::string color, std::string sex)
{
    std::cout << "Pony " << this->_breed << "is born " << std::endl; 
    this->_breed = breed;
    this->_color = color;
    this->_sex = sex;
}

Pony::~Pony()
{
    std::cout << "Pony " << this->_breed << "died " << std::endl;
}

