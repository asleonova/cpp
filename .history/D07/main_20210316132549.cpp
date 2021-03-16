/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:14:48 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 13:25:49 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

int main()
{
    int a = 21;
    int b = 42;

    std::cout << "a value is: " << a << std::endl; 
    std::cout << "b value is: " << b << std::endl; 
    std::cout << "max of " << a << " and " << b << " is ";
    std::cout << max<int>(a, b) << std::endl;
    std::cout << "min of " << a << " and " << b << " is ";
    std::cout << min<int>(a, b) << std::endl;
    std::cout << "swaping values: " << std::endl;
    swap<int>(a, b);
    std::cout << "a value after swap: " << a << std::endl; 
    std::cout << "b value after swap: " << b << std::endl; 
    
    float c = -1.7f;
    float d = 4.2f;

    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>(c, d) << std::endl; 


    char e = 'a';
    char f = 'z';

    std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max<char>(e, f) << std::endl; 

    return 0;
}