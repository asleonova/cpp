/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:41:23 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/08 21:04:46 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    int x;
    std::cout << CLGREEN << "Give a grade to your Bureucrat" << CLEND << std::endl;
    std::cin >> x;
    try
    {
        Bureaucrat anna("Anna", x);

        std::cout << anna << std::endl;
        std::cout << "Now let's try to decrement on the value the user asks us" << std::endl;
        std::cout << "Please enter the number to decrement: ";
        std::cin >> x;
        try
        {
            for (int i = 0; i < x; i++)
                anna.DecrementGrade();
            std::cout << anna << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << CLRED << e.what() << CLEND << '\n';
        }
        std::cout << "Now let's try to increment on the value the user asks us" << std::endl;
        std::cout << "Please enter the number to increment: ";
        std::cin >> x;
        try
        {
            for (int i = 0; i < x; i++)
                anna.IncrementGrade();
            std::cout << anna << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << CLRED << e.what() << CLEND << '\n';
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}