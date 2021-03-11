/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:09:34 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 17:50:25 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
    private:
        std::string _name;
        std::string _title;
        Sorcerer () {}
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & src);
        Sorcerer & operator=(Sorcerer const & rhs);
        ~Sorcerer();
        std::string getName() const;
        std::string getTitle() const;
        void polymorph(Victim const & victim) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif