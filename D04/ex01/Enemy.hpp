/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:55:34 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 17:29:37 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy
{
    private:
        int _hp;
        std::string _type;
        Enemy() {}
    public:
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const & src);
        Enemy & operator=(Enemy const & rhs);
        virtual ~Enemy();

        std::string getType() const;
        int getHP() const;
        virtual void takeDamage(int ammount);
};

#endif