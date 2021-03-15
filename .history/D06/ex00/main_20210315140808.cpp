/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:00:30 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/15 14:08:08 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Convert c(argv[1]);
        std::cout << c;
    
    }

        
    else
    {
        std::cout << "Wrong num of params. Usage: ./convert [value_to_convert]" << std::endl;
        return (1);
    }
    return (0);
}