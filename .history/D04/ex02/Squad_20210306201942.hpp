/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:14:53 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 20:19:42 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"

class Squad : public ISquad
{
    private:
        int _count;
        ISpaceMarine *
        
    public:
        Squad();
        virtual ~Squad();
        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int num) const;
        virtual int push(ISpaceMarine*) const; 
};

#endif