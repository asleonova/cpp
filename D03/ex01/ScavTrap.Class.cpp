/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:02:24 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/20 21:47:59 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.Class.hpp"
#include <time.h>

ScavTrap::ScavTrap(std::string name) :
_hitPoints(100),
_maxHitPoints(50),
_energyPoints(50),
_maxEnergyPoints(50),
_level(1),
_name(name), 
_meAttackDamage(20),
_raAttackDamage(15),
_armorDamageReduction(3)
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != & rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_level = rhs._level;
        this->_meAttackDamage = rhs._meAttackDamage;
        this->_raAttackDamage = rhs._meAttackDamage; 
        this->_armorDamageReduction = rhs._armorDamageReduction;
    }
    return (*this);
}

ScavTrap:: ~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

std::string ScavTrap::getName(void) const
{
    return this->_name;
}

int ScavTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "\x1b[4;35mSCAVTRAP\x1b[0m\x1b[1;35m " << this->_name << "\x1b[0m attacks \x1b[1;33m" << target << "\x1b[0m at range, causing \x1b[1;31m" << this->_raAttackDamage << "\x1b[0m points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "\x1b[4;35mSCAVTRAP\x1b[0m\x1b[1;35m " << this->_name << "\x1b[0m attacks \x1b[1;33m" << target << "\x1b[0m at range, causing \x1b[1;31m" << this->_meAttackDamage << "\x1b[0m points of damage!" << std::endl; 
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if ((int)amount > this->_armorDamageReduction)
        amount = (int)amount - this->_armorDamageReduction;
    else
        amount = 0;
    if (this->_hitPoints > (int)amount)
        this->_hitPoints -= (int)amount;
    else
        this->_hitPoints = 0;
    std::cout << "\x1b[4;35mSCAVTRAP\x1b[0m\x1b[1;35m " << this->_name << "\x1b[0m takes \x1b[1;33m" << amount << "\x1b[0m of damage. Current HP level is:  \x1b[1;31m" << this->_hitPoints << "\x1b[0m" << std::endl; 
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    if (this->_hitPoints > this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
}

void ScavTrap::challengeNewComer(void)
{
    srand(time(0));
    std::string challengeMessage[5] = {
        "\x1b[1;31m Kill your Pony 😢 \x1b[0m",
        "\x1b[1;32m Play with Pony ⚽ \x1b[0m",
        "\x1b[1;33m Feed Pony 🍏 \x1b[0m",
        "\x1b[1;34m Walk with Pony🚶‍♀️ \x1b[0m",
        "\x1b[1;35m Go shopping with Pony 🛒\x1b[0m"
    };
    int i = rand() % 5;
    std::cout << "Here's your challenge: " << challengeMessage[i] << std::endl; 
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & i)
{
    o << i.getEnergyPoints();
    return (o);
}