/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:46:36 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/01 12:47:18 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

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
    int _armorDamageReduction;

public:
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    FragTrap & operator=(FragTrap const & rhs);
    ~FragTrap();
    std::string getName(void) const;
    int getEnergyPoints(void) const;
    int getHitPoints(void) const;
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
};

std::ostream & operator<<(std::ostream & o, FragTrap const & i);

#endif