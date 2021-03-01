/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:02:24 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/01 13:40:45 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <time.h>

ScavTrap::ScavTrap(std::string name)
{
    this->type = "SC4V-TP";
    this->_hitPoints = 100;
    this->_maxHitPoints = 50;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_name = name; 
    this->_meAttackDamage = 20;
    this->_raAttackDamage = 15;
    this->_armorDamageReduction = 3;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
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