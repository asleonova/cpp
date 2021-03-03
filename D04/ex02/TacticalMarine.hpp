/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:54:55 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/03 19:55:28 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_H
# define TACTICAL_MARINE_H

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        virtual ~TacticalMarine();
        TacticalMarine(TacticalMarine const & src);
        TacticalMarine & operator=(TacticalMarine const & rhs);

        virtual ISpaceMarine *clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif