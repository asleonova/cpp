/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:30:18 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 14:04:13 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_H
# define POWER_FIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(PowerFist const & src);
        PowerFist & operator=(PowerFist const & rhs);
        ~PowerFist();

        virtual void attack() const;

};

#endif