/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:09:51 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 17:22:47 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>

class Victim
{
    private:
        std::string _name;
        Victime() {}
    public:
        Victim(std::string name);
        Victim(Victim const & src);
        Victim & operator=(Victim const & rhs);
        ~Victim(void);

        std::string getName(void) const;
        virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif