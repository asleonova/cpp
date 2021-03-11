/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Soldier.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:09:13 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 17:45:24 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "Victim.hpp"

class Soldier : public Victim
{
    private:
        Soldier();
        std::string _name;
    public:
        Soldier(std::string name);
        Soldier(Soldier const & src);
        Soldier & operator=(Soldier const & rhs);
        std::string getName(void);
        virtual void getPolymorphed() const;
        virtual ~Soldier(void);
};

#endif