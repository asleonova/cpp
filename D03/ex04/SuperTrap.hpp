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
#include "ClapTrap.Class.hpp"
#include "FragTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
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


};

#endif