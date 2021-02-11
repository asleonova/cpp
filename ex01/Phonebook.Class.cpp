/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:00:59 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/11 18:01:01 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.Class.hpp"

Phonebook::Phonebook(void)
{

}

void Phonebook::add_contact(void)
{
    for(int i = 0; i < 8; i++)
    {
        if (this->contact_list[i].added == false)
        {   
            this->contact_list[i].add_contact_info();
            return ;
        }
    }
    std::cout << "\033[1;31mSORRY! YOU'VE REACHED THE MAX LIMIT OF CONTACTS THAT CAN BE ADDED TO THE PHONEBOOK.\033[0m" << std::endl << std::endl;
}

void Phonebook::search_contact(void)
{
    std::string u_input;
    int i;
    if (this->contact_list[0].added == false)
	{
        std::cout << std::endl;
		std::cout << "\033[1;31mNo contacts added yet. Add one by typing the command ADD :) !\033[0m" << std::endl << std::endl;
		return;
	}
    std::cout << "\033[1;35m/* ***************************************** */\033[0m" << std::endl << std::endl;
    std::cout << " ------------------------------------------- " << std::endl;
    std::cout << "|";
    std::cout << std::setw(10) << "Index";     
    std::cout << "|";
    std::cout << std::setw(10) << "First name"; 
    std::cout << "|";
    std::cout << std::setw(10) << "Last name"; 
    std::cout << "|";
    std::cout << std::setw(10) << "Nickname";
    std::cout << "|";
    std::cout << std::endl;
    std::cout << " ------------------------------------------- " << std::endl;
    for (int i = 0; i < 8; i++)
    {
      if (contact_list[i].added == false)
           break ;
        contact_list[i].print_table_info(i);
        std::cout << std::endl;
        std::cout << " ------------------------------------------- " << std::endl;

    }
    std::cout << std::endl << "\033[1;35m/* ***************************************** */\033[0m" << std::endl << std::endl;
    std::cout << "Find more info about the contact, enter the index: ";
    std::getline(std::cin, u_input);
    if (u_input.length() > 1 || u_input[0] < '0' || u_input[0] > '7')
    {
        std::cout << std::endl << "\033[1;31mError: index must be an integer in the range of 0 to 7\033[0m" << std::endl;
    }
    else    
    {
        i = std::stoi(u_input);
        contact_list[i].print_contact_info();
        std::cout << std::endl;
    }
}

Phonebook::~Phonebook(void)
{

}
