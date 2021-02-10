# include <iostream>
# include "Phonebook.Class.hpp"
#include <iomanip>
# include <string>

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
    std::cout << "SORRY! YOU'VE REACHED THE MAX LIMIT OF CONTACTS THAT CAN BE ADDED TO THE PHONEBOOK." << std::endl << std::endl;
}

void Phonebook::search_contact(void)
{
    std::string u_input;
    int i;
    if (this->contact_list[0].added == false)
	{
        std::cout << std::endl;
		std::cout << "No contacts added yet. Add one by typing the command ADD :) !" << std::endl << std::endl;
		return;
	}
    std::cout << "/* ***************************************** */" << std::endl << std::endl;
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
    std::cout << std::endl << "/* ***************************************** */" << std::endl << std::endl;
    std::cout << "Find more info about the contact, enter the index: ";
    std::getline(std::cin, u_input);
    i = std::stoi(u_input);
    contact_list[i].print_contact_info();
    std::cout << std::endl;
}

Phonebook::~Phonebook(void)
{

}
