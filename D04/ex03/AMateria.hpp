/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:16:41 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 11:22:12 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_H
# define A_MATERIA_H

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
private:
    unsigned int _xp;
    std::string _type;
    AMateria() {}

public:
    AMateria(std::string const &type);
    virtual ~AMateria();
    AMateria(AMateria const & src);
    AMateria & operator=(AMateria const & rhs);

    std::string const &getType() const; //Returns the materia type
    unsigned int getXP() const;         //Returns the Materia's XP
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif