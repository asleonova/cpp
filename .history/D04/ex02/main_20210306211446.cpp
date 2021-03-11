/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:00:08 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 21:14:46 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

#include <unistd.h>

int main()
{
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;
ISpaceMarine *bob1 = new AssaultTerminator;
ISpaceMarine *bob2 = new AssaultTerminator;
    ISquad *vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(bob1);
    vlc->push(bob2);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    sleep(50);
    return 0;
}