/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:56:56 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 20:58:29 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// не забыть сделать конструктор копирования, присваивания и т.п.!!!!!!!

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
    *this = src;    
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs)
{
    (void)rhs;
    return(*this);
}

ISpaceMarine* TacticalMarine::clone() const
{
    return new TacticalMarine(*this); 
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}


