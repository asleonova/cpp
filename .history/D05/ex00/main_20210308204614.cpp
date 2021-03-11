/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:41:23 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 20:46:14 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
       int x;
       Bureaucrat anna("Anna", 100);
       std::cout << anna << std::endl;
       std::cout << "Now let's try to decrement on the value the user asks us" << std::endl;
       while (1)
       {
        std::cout << "Please enter the number to decrement: ";
        std::cin >> x;
       }       
    try
    {
        for (int i = 0; i < x; i++)
            anna.DecrementGrade();
        std::cout << anna << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }
    return 0;
    
}