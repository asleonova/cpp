/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:12:08 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/03 19:19:22 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_SQUAD_H
# define I_SQUAD_H

#include <iostream>

class ISquad
{
    public:
        virtual ~ISquad() {}
        virtual int getCount() const = 0;
        virtual ISpaceMarine* getUnit(int) const = 0;
        virtual int push(ISpaceMarine*) = 0;
};

#endif