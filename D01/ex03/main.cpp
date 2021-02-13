/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:53:38 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 21:18:43 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <unistd.h>

int main(void)
{
    ZombieHorde zombieHorde(15);

    std::cout << "\033[1;35mCreating zombies:\033[0m" << std::endl;
    zombieHorde.announce();    
    //sleep(100);

}