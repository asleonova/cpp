/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:02:32 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/20 21:47:12 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_H
# define SUPER_TRAP_H

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
        SuperTrap(std::string name);
        SuperTrap(SuperTrap const & src);
        ~SuperTrap();
        SuperTrap & operator=(SuperTrap const & rhs);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        int getEnergyPoints() const;
        int getHitPoints() const;


};

#endif