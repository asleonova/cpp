/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CrazyPony.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:42:55 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 18:46:37 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRAZY_PONY_H
# define CRAZY_PONY_H

#include "Enemy.hpp"

class CrazyPony : public Enemy
{
    public:
        CrazyPony();
        CrazyPony(CrazyPony const & src);
        CrazyPony & operator=(CrazyPony const & rhs);
        ~CrazyPony();

    virtual void takeDamage(int amount);
};

#endif