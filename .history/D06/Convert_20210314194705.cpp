/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:49 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/14 19:47:05 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert(char *input) : _input(input)
{
	parser();
}

Convert::Convert(const Convert &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &Convert::operator=(Convert const &rhs)
{
	if (this != &rhs)
	{
		this->_input = rhs._input;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Convert const &i)
{
	if (i.getIfPossible() == true)
	{
		if (i.getIfChar() == true)
			o << "char: '" << i.getChar() << "'" << std::endl;
		else
			o << "char: Non displayable" << std::endl;
		o << "int: " << i.getInt() << std::endl;
	}
	else 
	{
		o << "char: impossible" << std::endl;
		o << "int: impossible " << std::endl;
	}

	if (i.getFloat() - i.getInt() == 0)
	{

		o << "float: " << i.getFloat() << ".0f" << std::endl;
		o << "double: " << i.getDouble() << ".0" << std::endl;
	}
	else
	{

		o << "float: " << i.getFloat() << "f" << std::endl;
		o << "double: " << i.getDouble() << std::endl;
	}
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Convert::convert_to_double()
{
	this->_double = atof(this->_input);
}

void Convert::convert_to_float()
{
	this->_float = static_cast<float>(this->_double);
}

void Convert::convert_to_int()
{
	this->_int = static_cast<int>(this->_float);
}

void Convert::convert_to_char()
{
	if (isprint(this->_int) && (this->_float - this->_int == 0))
	{
		this->_char = static_cast<char>(this->_int);
		this->_isChar = true;
	}
	else
		this->_isChar = false;
}

void Convert::parser()
{
	convert_to_double();
	convert_to_float();
	if (this->_input == "nan" || this->_input == "nanf" || this->_input == "-inff" || this->_input == "+inff" || this->_input == "-inf" || this->_input == "+inf")
	{
		this->_possible = false;
		return;
	}
	else
	{
		this->_possible = true;
		convert_to_int();
		convert_to_char();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

char Convert::getChar() const
{
	return this->_char;
}

int Convert::getInt() const
{
	return this->_int;
}

float Convert::getFloat() const
{
	return this->_float;
}

double Convert::getDouble() const
{
	return this->_double;
}

bool Convert::getIfChar() const
{
	return this->_isChar;
}

bool Convert::getIfPossible() const
{
	return this->_possible;
}

/* ************************************************************************** */