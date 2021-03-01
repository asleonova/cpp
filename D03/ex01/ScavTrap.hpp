/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:47:47 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/01 12:48:13 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>

class ScavTrap
{
private:
    int _hitPoints;
    int _maxHitPoints;
    int _energyPoints;
    int _maxEnergyPoints;
    int _level;
    std::string _name; // should be a parameter of a constructor;
    int _meAttackDamage;
    int _raAttackDamage;
    int _armorDamageReduction;

public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();
    ScavTrap & operator=(ScavTrap const & rhs);
    std::string getName(void) const;
    int getEnergyPoints(void) const;
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewComer(void);
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & i);

#endif