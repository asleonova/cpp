/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Soldier.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:09:13 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 12:13:55 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "Victim.hpp"

class Soldier : public Victim
{
    private:
        std::string _name;
    public:
        Soldier(std::string name);
        Soldier(Soldier const & src);
        Soldier & operator=(Soldier const & rhs);
        std::string getName(void);
        virtual void getPolymorphed() const;
        ~Soldier(void);
};

#endif