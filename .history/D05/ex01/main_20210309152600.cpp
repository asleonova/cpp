/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:41:23 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/09 15:26:00 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    unsigned int x;
    unsigned int sign_grade;
    unsigned int exec_grade;
    std::string f_name;
    std::string b_name;

    std::cout << CLGREEN << "Give a name to your Bureucrat: " << CLEND;   
    std::cin >> b_name;
    std::cout << CLGREEN << "Give a grade to your Bureucrat: " << CLEND;
    std::cin >> x;
    std::cout << CLGREEN << "Now enter the name of the form to sign: " << CLEND;
    std::cin >> f_name;
    std::cout << CLGREEN << "Now enter the sign grade of the form to sign: " << CLEND;
    std::cin >> sign_grade;
    std::cout << CLGREEN << "Now enter the grade to execute the form to sign: " << CLEND;
    std::cin >> exec_grade;
    try
    {
        Bureaucrat b(b_name, x);
        std::cout << "Bureaucrat successfully created! Here are the characteristics: " << std::endl;
        std::cout << b << std::endl;
        
        Form f(f_name, sign_grade, exec_grade);
        std::cout << "The form successfully created! Here are the characteristics: " << std::endl;
        std::cout << f << std::endl;

        std::cout << CLGREEN << "Now let's try to decrement on the value the user asks us" << CLEND << std::endl;
        std::cout << CLGREEN << "Please enter the number to decrement: " << CLEND;
        std::cin >> x;
        try
        {
            for (unsigned int i = 0; i < x; i++)
                b.DecrementGrade();
            std::cout << b << std::endl;
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
            for (unsigned int i = 0; i < x; i++)
                b.IncrementGrade();
            std::cout << b << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << CLRED << e.what() << CLEND << '\n';
        }
        try
        {
            b.signForm(f);
        }
        catch(const std::exception& e)
        {
            std::cerr << CLRED << e.what() << CLEND << '\n';
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }

    return 0;
}