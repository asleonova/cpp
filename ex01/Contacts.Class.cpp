#include "Contacts.Class.hpp"
# include <iomanip>
# include <string>

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
    std::cout << "/* ****************************************************** */" << std::endl;
    std::cout << std::endl << "   CONGRATS! THE CONTACT HAS BEEN ADDED TO THE PHONEBOOK!" << std::endl << std::endl;
    std::cout << "/* ****************************************************** */" << std::endl << std::endl;
    this->added = true;

}

void Contact:: print_contact_info(void)
{
    std::cout << "CONTACT INFORMATION" << std::endl << std::endl;
    std::cout << "First name :" << this->first_name << std::endl;
    std::cout << "Last name: " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Login: " << this->login << std::endl;
    std::cout << "Postal address: " << this->postal_address << std::endl;
    std::cout << "Email adress: " << this->email_address << std::endl;
    std::cout << "Phone number: " << this->phone_number << std::endl;
    std::cout << "Birthday date: " << this->birthday_date << std::endl;
    std::cout << "Favorite meal: " << this->birthday_date << std::endl;
    std::cout << "Underwear color: " << this->underwear_color << std::endl;
    std::cout << "Darkest secret:  " << this->darkerst_secret << std::endl; 
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