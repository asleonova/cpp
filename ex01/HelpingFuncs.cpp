#include <iostream>
#include "PhoneBook.Class.hpp"

void print_row(int index)
{

	std::cout << "|" << std::setw(10) << index << "|";
	std:cout << "First name";
	std::cout << "|";
	std::cout << "Last name";
	std::cout << "|";
	std::cout << "Nickname"
	std::cout << "|" << std::endl;
}