/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:08:10 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/02 12:24:19 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Soldier.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Soldier jean("Jean");
    std::cout << robert << jim << joe << jean;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(jean);

    return 0;
}