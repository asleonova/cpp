/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:41:23 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/11 17:08:36 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void functionalityTest(void)
{
    unsigned int x;
    std::string f_name;
    std::string b_name;

    std::cout << CLGREEN << "Give a name to your Bureucrat: " << CLEND;   
    std::cin >> b_name;
    std::cout << CLGREEN << "Give a grade to your Bureucrat: " << CLEND;
    std::cin >> x;
    try
    {
        Bureaucrat b(b_name, x);
        std::cout << "Bureaucrat successfully created! Here are the characteristics: " << std::endl;
        std::cout << b << std::endl;
        
        std::cout << "Creating 3 forms to sign: " << std::endl;
        ShrubberyCreationForm sh("lala");
        Form* a(ShrubberyCreationForm);
        std::cout << &a << std::endl;
        RobotomyRequestForm ro("lala");
        PresidentialPardonForm pr("lala");
        std::cout << "Shrubbery Creation Form successfully created! Here are the characteristics: " << std::endl;
        std::cout << sh << std::endl;
        std::cout << "Robotomy Request Form successfully created! Here are the characteristics: " << std::endl;
        std::cout << ro << std::endl;
        std::cout << "Presidential Pardon Form successfully created! Here are the characteristics: " << std::endl;
        std::cout << pr << std::endl;
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
            std::cout << CLGREEN << "Let's try to sign forms" << CLEND << std::endl;
            b.signForm(sh);
            b.signForm(ro);
            b.signForm(pr);
        }
        catch(const std::exception& e)
        {
            std::cerr << CLRED << e.what() << CLEND << '\n';
        }
        std::cout << CLGREEN << "You can decrement the Bureucrat value, but always remember that if it's too low, the form can't be executed!" << CLEND << std::endl;
        std::cout << CLGREEN << "Please enter the number to decrement: " << CLEND;
        std::cin >> x;
        for (unsigned int i = 0; i < x; i++) 
            b.DecrementGrade();
        sh.execute(b);
        ro.execute(b);
        pr.execute(b);
    }
    catch (const std::exception &e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }
}

void cpTest()
{
     std::cout << CLGREEN << "Creating a Shrubbery Creation Form with a target 'Enemy': " << CLEND << std::endl;
    ShrubberyCreationForm sh("Enemy");
    std::cout << sh << std::endl;
    std::cout << CLGREEN << "Creating a Shrubbery Creation copy Form: " << CLEND << std::endl;
    ShrubberyCreationForm sh1(sh);
    std::cout << sh1 << std::endl;

    std::cout << CLGREEN << "Creating a Robotomy Request Form with a target 'Politician': " << CLEND << std::endl;
    RobotomyRequestForm ro("Politician");
    std::cout << ro << std::endl;
    std::cout << CLGREEN << "Creating a Robotomy Request copy Form: " << CLEND << std::endl;
    RobotomyRequestForm ro1(ro);
    std::cout << ro1 << std::endl;
    
    std::cout << CLGREEN << "Creating a Presidential Pardon Form with a target 'Criminal': " << CLEND << std::endl;
    PresidentialPardonForm pr("Criminal");
    std::cout << pr << std::endl;
    std::cout << CLGREEN << "Creating a Presidential Pardon copy Form: " << CLEND << std::endl;
    PresidentialPardonForm pr1(pr);
    std::cout << pr1 << std::endl;
}

int main()
{
    std::cout << CLBLUE << "*** FUNCTIONALITY TEST STARTED ****" << CLEND << std::endl;
    functionalityTest();
    std::cout << CLBLUE << "//// FUNCTIONALITY TEST END ////" << CLEND << std::endl;
    std::cout << "//////////////***//////////////" << std::endl;
    std::cout << CLBLUE << "*** COPY TEST STARTED ****" << CLEND << std::endl;
    cpTest();
    std::cout << CLBLUE << "//// COPY TEST END ////" << CLEND << std::endl;
    return 0;
}