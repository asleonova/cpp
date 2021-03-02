/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:54:36 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 14:47:03 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const & src)
{
    *this = src;
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
    if (this != & rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return (*this);
}

Enemy::~Enemy()
{
}

int Enemy::getHP() const
{
    return this->_hp;
}

std::string Enemy::getType() const
{
    return this->_type;
}

void Enemy::takeDamage(int amount)
{
    if (amount < 0)
        return ; 
    this->_hp -= amount;
    if (this->_hp < 0)
        this->_hp = 0;
}


