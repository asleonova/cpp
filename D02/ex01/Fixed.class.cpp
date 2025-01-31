/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:34:05 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/19 19:31:50 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(void): _n(0)
{
    std::cout << "Default constructor called" << std::endl;    
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_n = n << this->_bit;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    this->_n = roundf(n * (1 << this->_bit));
}

Fixed:: ~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed & Fixed:: operator=(Fixed const & src)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_n = src._n;
    return (*this);    
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void Fixed::setRawBits(int const raw)
{
    this->_n = raw;
}

int Fixed::toInt(void) const
{
    return(this->_n >> this->_bit);
}

float Fixed::toFloat(void) const
{
    return float(this->_n) / float(1 << this->_bit);
}

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
    o << src.toFloat();
    return o;
}
