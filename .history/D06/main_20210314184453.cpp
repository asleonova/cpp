/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:00:30 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/14 18:44:53 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Convert.hpp"

// if \0 надо обработать!!!!!!!!
// float d = 12345.12345abc; - такое число надо обработать и выдать ошибку!!!

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Convert c(argv[1]);
        std::cout << c << std::endl;
    
    }

        
    else
    {
        std::cout << "Wrong num of params. Usage: ./convert [value_to_convert]" << std::endl;
        return (1);
    }
    return (0);
}