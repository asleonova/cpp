/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:41:23 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 19:12:34 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
       std::string u_input;
       Bureaucrat anna("Anna", 150);
       std::cout << anna << std::endl;
       std::cout << "Now let's try to decrement on the value the user asks us" << std::endl;
       std::cout << "Please enter the number to decrement: ";
       std::getline(std::cin, u_input);
       
    try
    {
       std::cout << anna << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }
    return 0;
    
}