/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:02:32 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/20 21:47:12 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

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
    std::string getName(void) const;
    int getEnergyPoints(void) const;
    ScavTrap & operator=(ScavTrap const & rhs);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewComer(void);
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & i);

#endif