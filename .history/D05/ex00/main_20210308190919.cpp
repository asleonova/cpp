/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:41:23 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 19:09:19 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
       Bureaucrat anna("Anna", 150);
       std::cout << anna << std::endl;
       std::cout << "Now let's try to decrement on the value the user asks us" << std::endl;
       std::cout 
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