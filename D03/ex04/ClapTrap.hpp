/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:41:38 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/01 13:41:40 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap
{
protected:
    std::string type;
    int _hitPoints;
    int _maxHitPoints;
    int _energyPoints;
    int _maxEnergyPoints;
    int _level;
    std::string _name;
    int _meAttackDamage;
    int _raAttackDamage;
    int _armorDamageReduction;

public:
    ClapTrap();
    ClapTrap(ClapTrap const & src);
    ClapTrap & operator=(ClapTrap const & rhs);
    ~ClapTrap();

    std::string getName(void) const;
    int getEnergyPoints(void) const;
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & i);

#endif