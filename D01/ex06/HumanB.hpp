/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:22:38 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 21:10:21 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon *_weapon;
public:
    HumanB(std::string _name);
    void setWeapon(Weapon &weaponType);
    void attack(void);
    ~HumanB();
};

#endif
