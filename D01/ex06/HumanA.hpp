/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:22:30 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 20:59:54 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
class HumanA
{
private:
    Weapon &_weapon;
    std::string _name;
public:
    HumanA(std::string name, Weapon &weaponType);
    void attack(void);
    ~HumanA(void);
};

#endif
