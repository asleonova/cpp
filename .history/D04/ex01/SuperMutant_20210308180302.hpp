/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:47:51 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 18:03:02 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_H
# define SUPER_MUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        SuperMutant(SuperMutant const & src);
        SuperMutant & operator=(SuperMutant const & rhs);
        virtual ~SuperMutant();

    virtual void takeDamage(int amount);
};

#endif