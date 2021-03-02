/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:47:51 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 18:03:55 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_H
# define RAD_SCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        RadScorpion(RadScorpion const & src);
        RadScorpion & operator=(RadScorpion const & rhs);
        virtual ~RadScorpion();

        //virtual void takeDamage(int amount);
};

#endif