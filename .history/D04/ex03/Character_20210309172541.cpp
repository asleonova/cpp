/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:19:25 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/09 17:25:41 by dbliss           ###   ########.fr       */
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
    for (int i = 0; i < 4; i++)
        delete this->materias[i];
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
        {
            delete this->materias[i];
            this->materias[i] = rhs.materias[i];
        }
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
    if (idx < 0 || idx > 3)
    {
        std::cout << "\x1b[31mIndex of materia out of range, try from 0 to 3\x1b[0m" << std::endl;
        return ;
    } 
    materias[idx] = nullptr;
}

void Character::use(int idx, ICharacter & target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "\x1b[31mIndex of materia out of range, try from 0 to 3\x1b[0m" << std::endl;
        return ;
    }
    if (materias[idx] != nullptr)
        this->materias[idx]->use(target);
}

const AMateria* Character::getMateria(int index) const
{
    if (index < 0 || index > 3)
        return nullptr; 
    return this->materias[index];
}











