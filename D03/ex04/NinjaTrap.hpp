/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:02:32 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/20 21:47:12 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_H
# define NINJA_TRAP_H

#include <iostream>
#include "ClapTrap.Class.hpp"
#include "FragTrap.Class.hpp"
#include "ScavTrap.Class.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & src);
        ~NinjaTrap();
        NinjaTrap & operator=(NinjaTrap const & rhs);
        
        void ninjaShoebox(FragTrap &target);
        void ninjaShoebox(ScavTrap &target);
        void ninjaShoebox(NinjaTrap &target);
};

#endif