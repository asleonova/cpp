/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:41:23 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/09 14:04:46 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    int x;
    int sign_grade;
    int exec_grade;
    std::string input;
    
    std::cout << CLGREEN << "Give a grade to your Bureucrat: " << CLEND;
    std::cin >> x;
    try
    {
        Bureaucrat anna("Anna", x);

        std::cout << anna << std::endl;
        std::cout << CLGREEN << "Now let's try to decrement on the value the user asks us" << CLEND << std::endl;
        std::cout << CLGREEN << "Please enter the number to decrement: " << CLEND;
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
        std::cout << CLGREEN << "Now let's try to increment on the value the user asks us" << CLEND << std::endl;
        std::cout << CLGREEN << "Please enter the number to increment: " << CLEND;
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
    std::cout << CLGREEN << "Now give the name of the form to sign: " << CLEND;
    std::cin >> input;


    return 0;
}