/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:00:41 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/11 18:00:43 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include "Contacts.Class.hpp"
#include "Phonebook.Class.hpp"

int main(void)
{
    Phonebook contact;
    std::string u_input;
    std::cout << "\033[1;35m/* ***************************************** */\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m     Welcome to \033[1;31mAWESOME\033[0m Phonebook          \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m     ________________________________      \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m     it supports the following commands:   \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m     ________________________________      \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m \033[1;32mADD:\033[0m adds a new contact’s information;    \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m      is defined by the following fields:  \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m                                           \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m      first name       phone number        \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m      last name        birthday date       \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m      nickname         favorite meal       \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m      login            underwear color     \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m      postal address   darkest secret      \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m      email address                        \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m     ________________________________      \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m \033[1;32mSEARCH:\033[0m program will display a list of    \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m         the available non-empty contacts  \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m     ________________________________      \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m \033[1;32mEXIT:\033[0m program quits and the contacts      \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/*\033[0m       are lost forever                    \033[1;35m*/\033[0m" << std::endl;
    std::cout << "\033[1;35m/* ***************************************** */\033[0m" << std::endl;
    std::cout << "    P.S.: PHONEBOOK SUPPORTS ONLY 8 CONTACTS   " << std::endl;
    std::cout << std::endl << "Let's start: " << std::endl;
    std::cout << "> "; 
    while (1)
    {
        std::getline(std::cin, u_input);
        for (size_t i = 0; i < u_input.length(); i++)
            u_input[i] = toupper(u_input[i]);
        if (u_input.compare("ADD") == 0)
            contact.add_contact();
        else if (u_input.compare("SEARCH") == 0)
            contact.search_contact();
        else if (u_input.compare("EXIT") == 0)
            return (0);
        else
            std::cout << "\033[1;31mOoops, it's not a valid command :( Try ADD, SEARCH or EXIT\033[0m" << std::endl;
        std::cout << "> "; 
    }
    return (0);
}