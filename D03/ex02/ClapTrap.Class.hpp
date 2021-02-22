#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H

#include <iostream>

class ClapTrap
{
protected:
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