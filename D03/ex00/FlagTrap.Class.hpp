/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 22:10:01 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/19 22:29:38 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

#include <iostream>

class FragTrap
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
    int _arAttackDamage;

public:
    FragTrap(std::string name);
    FragTrap(Fragtrap const & src);
    ~FragTrap();
    FragTrap & operator=(Fragtrap const & rhs);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif