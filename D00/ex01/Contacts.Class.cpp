/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:00:12 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/11 18:00:14 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.Class.hpp"

Contact:: Contact(void)
{
    this->added = false;
}

void Contact:: add_contact_info(void)
{
    std::cout << std::endl;
    std::cout << "--> First things first: enter first name of your contact: ";
    std::getline(std::cin, this->first_name);
    std::cout << "--> Last name doesn't come last :D. Enter the last name: ";
    std::getline(std::cin, this->last_name);
    std::cout << "--> How could you remember a person without nickname??? Enter nickname: ";
    std::getline(std::cin, this->nickname);
    std::cout << "--> Phonebook wants to keep MORE information. Enter login : ";
    std::getline(std::cin, this->login);
    std::cout << "--> In case you want to hang out at his/her house. Enter postal address : ";
    std::getline(std::cin, this->postal_address);
    std::cout << "--> More important info. Enter email adress : ";
    std::getline(std::cin, this->email_address);
    std::cout << "--> Enter phone number : ";
    std::getline(std::cin, this->phone_number);
    std::cout << "--> Enter Birthday day : ";
    std::getline(std::cin, this->birthday_date);
    std::cout << "--> Enter Favourite meal : ";
    std::getline(std::cin, this->favorite_meal);
    std::cout << "--> Ooops, even these details are important. Enter underwear color : ";
    std::getline(std::cin, this->underwear_color);
    std::cout << "And finally...Enter darkest secret : ";
    std::getline(std::cin, this->darkerst_secret);
    std::cout << std::endl;
    std::cout << "\033[1;32m/* ****************************************************** */\033[0m" << std::endl;
    std::cout << std::endl << "   \033[1;32mCONGRATS! THE CONTACT HAS BEEN ADDED TO THE PHONEBOOK!\033[0m" << std::endl << std::endl;
    std::cout << "\033[1;32m/* ****************************************************** */\033[0m" << std::endl << std::endl;
    this->added = true;

}

void Contact:: print_contact_info(void)
{
    if (this->added == false)
    {
        std::cout << std::endl << "\033[1;31mSorry, there's no contact under this index yet\033[0m" << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "\033[1;36mCONTACT INFORMATION\033[0m" << std::endl << std::endl;
    std::cout << "\033[1;34mFirst name:\033[0m " << this->first_name << std::endl;
    std::cout << "\033[1;34mLast name:\033[0m " << this->last_name << std::endl;
    std::cout << "\033[1;34mNickname:\033[0m " << this->nickname << std::endl;
    std::cout << "\033[1;34mLogin:\033[0m " << this->login << std::endl;
    std::cout << "\033[1;34mPostal address:\033[0m " << this->postal_address << std::endl;
    std::cout << "\033[1;34mEmail adress:\033[0m " << this->email_address << std::endl;
    std::cout << "\033[1;34mPhone number:\033[0m " << this->phone_number << std::endl;
    std::cout << "\033[1;34mBirthday date:\033[0m " << this->birthday_date << std::endl;
    std::cout << "\033[1;34mFavorite meal:\033[0m " << this->birthday_date << std::endl;
    std::cout << "\033[1;34mUnderwear color:\033[0m " << this->underwear_color << std::endl;
    std::cout << "\033[1;34mDarkest secret:\033[0m  " << this->darkerst_secret << std::endl; 
}

std::string Contact:: get_short_name(std:: string name)
{
    int len;
    std::string print_name;
    
    len = name.length();
    if (len > 10)
    {
        print_name = name.substr(0, 9);
        print_name = print_name.append(".");
    }
    else
        print_name = name;
    return (print_name);
}

void Contact:: print_table_info(int index)
{
    std::cout << "|" << std::setw(10) << index << "|";
	std::cout << std::setw(10) << get_short_name(this->first_name) << "|";
	std::cout << std::setw(10) << get_short_name(this->last_name) << "|";
	std::cout << std::setw(10) << get_short_name(this->nickname) << "|";
}

Contact:: ~Contact(void)
{

}