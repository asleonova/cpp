/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:45:24 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/17 14:13:21 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack(void)
{
    Pony pony = Pony("Fell", "black", "male");
}

void ponyOnTheHeap(void)
{
    Pony* pony1 = new Pony("Cob", "white", "female");
    delete pony1;
}

int main(void)
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}