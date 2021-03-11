/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NuclearBomb.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:35:31 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 18:08:30 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUCLEAR_BOMB_H
# define NUCLEAR_BOMB_H

#include "AWeapon.hpp"

class NuclearBomb : public AWeapon
{
    public:
        NuclearBomb();
        NuclearBomb(NuclearBomb const & src);
        NuclearBomb & operator=(NuclearBomb const & rhs);
        virtual ~NuclearBomb();

        virtual void attack() const;

};

#endif