/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CrazyPony.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:43:41 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 20:21:18 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CrazyPony.hpp"

CrazyPony::CrazyPony() : Enemy(100, "Crazy Pony")
{
    std::cout << "Wanna fight!" << std::endl;
}

CrazyPony::CrazyPony(CrazyPony const & src) : Enemy(src)
{
    *this = src;
}

CrazyPony & CrazyPony::operator=(CrazyPony const & rhs)
{
    Enemy::operator=(rhs);
    return (*this);
}

CrazyPony::~CrazyPony()
{
    std::cout << "Bye guys...you killed your little pony :(" << std::endl;
}

void CrazyPony::takeDamage(int amount)
{
    if (amount < 5)
        amount = 0;
    else 
        amount -= 5;
    Enemy::takeDamage(amount);
}