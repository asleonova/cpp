/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 11:40:59 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 18:20:34 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->materiasTypes[0] = nullptr;
    this->materiasTypes[1] = nullptr;
    this->materiasTypes[2] = nullptr;
    this->materiasTypes[3] = nullptr;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
       // if (this->materiasTypes[i] != nullptr)
            delete this->materiasTypes[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    *this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            delete this->materiasTypes[i];
            this->materiasTypes[i] = rhs.materiasTypes[i];
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materiasTypes[i] == nullptr)
        {
            this->materiasTypes[i] = materia;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
       if (this->materiasTypes[i] != nullptr)
        {
            if (this->materiasTypes[i]->getType() == type)
            {
                return (this->materiasTypes[i]->clone());
            }
        }
    }
    return (0);
}
