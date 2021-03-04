/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:19:25 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/04 20:00:48 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
    this->materias[0] = nullptr;
    this->materias[1] = nullptr;
    this->materias[2] = nullptr;
    this->materias[3] = nullptr;
}

Character::~Character()
{

}

Character::Character(Character const & src)
{
    *this = src;
}

Character & Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            delete this->materias[i];
    //    delete this->materias;
        for (int i = 0; i < 4; i++)
            this->materias[i] = rhs.materias[i];
        this->_name = rhs._name;
    }
    return (*this);    
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == nullptr)
        {
            materias[i] = m;
            return ;
        }
    }

}

void Character::unequip(int idx)
{
    if (idx < 0 && idx > 3) // make an error message
        return ;
    if (this->materias[idx])
        delete materias[idx];
}

void Character::use(int idx, ICharacter & target)
{
    if (idx < 0 && idx > 3)
        return ; // make an error message!!!!!!!
    this->materias[idx]->use(target);
}











