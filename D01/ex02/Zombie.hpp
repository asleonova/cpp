/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:53:11 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 20:20:13 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <iomanip>

class Zombie
{
private:
    std::string type;
    std::string name;
public:
    Zombie();
    Zombie* newZombie(std::string name);
    Zombie(std::string name, std::string type);
    void announce(void);
    ~Zombie();
};

#endif