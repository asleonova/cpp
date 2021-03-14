/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:41:23 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 17:34:36 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void functionalityTest(void)
{
    unsigned int x;
    std::string f_name;
    std::string b_name;
    std::string target;

    std::cout << CLGREEN << "Give a name to your Bureucrat: " << CLEND;
    std::cin >> b_name;
    std::cout << CLGREEN << "Give a grade to your Bureucrat: " << CLEND;
    std::cin >> x;
    try
    {
        Bureaucrat b(b_name, x);

        std::cout << "Bureaucrat successfully created! Here are the characteristics: " << std::endl;
        std::cout << b << std::endl;
        Intern intern;
        std::cout << CLGREEN << "Now we have an intern for Bureucrat who can make forms for him!" << CLEND << std::endl;
        std::cout << CLGREEN << "Please enter the form name: possible options: " <<
        std::endl << "'robotomy request' , 'presidential pardon request', 'shrubbery creation request')" << CLEND << std::endl;
        std::cout << "Please, enter the form request name: ";
        std::cin >> f_name;
        std::cout << CLGREEN << "Form also needs to be sent to sb. Please enter the target name: " << CLEND << std::endl;
        Form *f1 = intern.makeForm("robotomy request", target);
        if (f1)
        {
            std::cout << CLGREEN << "Form " << f1->getName() << " successfully created!" << CLEND << std::endl;
            std::cout << "Here are it's characteristics: " << std::endl;
            std::cout << *f1 << std::endl;
            try
            {
                std::cout << CLGREEN << "Let's try to sign the form" << CLEND << std::endl;
                b.signForm(*f1);
            }
            catch (const std::exception &e)
            {
                std::cerr << CLRED << e.what() << CLEND << '\n';
            }
            std::cout << CLGREEN << "You can decrement the Bureucrat value, but always remember that if it's too low, the form can't be executed!" << CLEND << std::endl;
            std::cout << CLGREEN << "Please enter the number to decrement: " << CLEND;
            std::cin >> x;
            for (unsigned int i = 0; i < x; i++)
                b.DecrementGrade();
            f1->execute(b);
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << CLRED << e.what() << CLEND << '\n';
    }
}

int main()
{
    std::cout << CLBLUE << "*** FUNCTIONALITY TEST STARTED ****" << CLEND << std::endl;
    functionalityTest();
    std::cout << std::endl << CLBLUE << "//// FUNCTIONALITY TEST END ////" << CLEND << std::endl;
    return 0;
}