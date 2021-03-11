/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:41:23 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 19:06:14 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
       Bureaucrat ann("Anna", 150);
       std::cout << ann << std::endl;
    try
    {
       Bureaucrat anna("Anna", 151);
       Bureaucrat ann("Anna", 150);
       std::cout << ann << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }
    return 0;
    
}