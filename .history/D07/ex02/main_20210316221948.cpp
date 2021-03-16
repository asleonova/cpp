/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:30 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 22:19:48 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <time.h>

int main()
{
    Array<int> a1;
    Array<int> a2(5);
    Array<int> a3(a2);
    Array<int> a4 = a2;
    std::cout << "A1: " << a1 << std::endl;
    std::cout << "A4: " << a4 << std::endl;

    sleep(50);
    return 0; 
}