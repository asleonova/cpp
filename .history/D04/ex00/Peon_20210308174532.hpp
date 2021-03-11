/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:08:43 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 17:45:32 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
    private:
        Peon();
        std::string _name;
    public:
        Peon(std::string name);
        Peon(Peon const & src);
        Peon & operator=(Peon const & rhs);
        std::string getName(void);
        virtual void getPolymorphed() const;
        virtual ~Peon(void);
};

#endif