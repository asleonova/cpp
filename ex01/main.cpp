#include <iostream>
#include <string>
#include <cctype>
//#include "PhoneBook.Class.hpp"
#include "Contacts.Class.hpp"
#include "Phonebook.Class.hpp"

int main(void)
{
   // Contact contact;
    Phonebook contact;
    //PhoneBook contact_list;
    std::string u_input;

    std::cout << "/* ***************************************** */" << std::endl;
    std::cout << "/*     Welcome to AWESOME Phonebook          */" << std::endl;
    std::cout << "/*     ________________________________      */" << std::endl;
    std::cout << "/*     it supports the following commands:   */" << std::endl;
    std::cout << "/*     ________________________________      */" << std::endl;
    std::cout << "/* ADD: adds a new contact’s information;    */" << std::endl;
    std::cout << "/*      is defined by the following fields:  */" << std::endl;
    std::cout << "/*                                           */" << std::endl;
    std::cout << "/*      first name       phone number        */" << std::endl;
    std::cout << "/*      last name        birthday date       */" << std::endl;
    std::cout << "/*      nickname         favorite meal       */" << std::endl;
    std::cout << "/*      login            underwear color     */" << std::endl;
    std::cout << "/*      postal address   darkest secret      */" << std::endl;
    std::cout << "/*      email address                        */" << std::endl;
    std::cout << "/*     ________________________________      */" << std::endl;
    std::cout << "/* SEARCH: program will display a list of    */" << std::endl;
    std::cout << "/*         the available non-empty contacts  */" << std::endl;
    std::cout << "/*     ________________________________      */" << std::endl;
    std::cout << "/* EXIT: program quits and the contacts      */" << std::endl;
    std::cout << "/*       are lost forever                    */" << std::endl;
    std::cout << "/* ***************************************** */" << std::endl;
    std::cout << "    P.S.: PHONEBOOK SUPPORTS ONLY 8 CONTACTS   " << std::endl;
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
            std::cout << "Ooops, it's not a valid command :( Try ADD, SEARCH or EXIT" << std::endl;
        std::cout << "> "; 
    }
    return (0);
}