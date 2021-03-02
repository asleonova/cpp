/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:35:31 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 14:03:37 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_H
# define PLASMA_RIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(PlasmaRifle const & src);
        PlasmaRifle & operator=(PlasmaRifle const & rhs);
        ~PlasmaRifle();

        virtual void attack() const;

};

#endif