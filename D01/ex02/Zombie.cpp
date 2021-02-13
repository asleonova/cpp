/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:52:59 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 20:20:06 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

Zombie::~Zombie()
{

}

void Zombie::announce(void)
{
    std::cout << "\033[1;32mzombie name:\033[0m " << std::setw(6) << this->name << "  \033[1;32mtype:\033[0m " << std::setw(6) << this->type << " \033[1;31mBraiiiiiiinnnssss...\033[0m" << std::endl;
}