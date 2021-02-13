/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:45:24 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 16:45:27 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack(void)
{
   // Pony pony("Fell", "black", "male");
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