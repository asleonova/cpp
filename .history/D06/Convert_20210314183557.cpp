/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:49 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/14 18:35:57 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert(char* input) : _input(input)
{
}

Convert::Convert( const Convert & src )
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

Convert &				Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
		this->_input = rhs._input;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Convert const & i )
{
	std::cout << "char: '" << i.getChar() <<  "'" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

double Convert::convert_to_double()
{
	this->_double = atof(this->_input);
	return (this->_double);
}

float Convert::convert_to_float()
{
	this->_float = static_cast <float>(this->_double);
	return (this->_float);
}

int Convert::convert_to_int()
{
	this->_int = static_cast <int>(this->_float);
	return (this->_int);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

char Convert::getChar()
{
	return this->_char;
}

int Convert::getInt()
{
	return this->_int;
}

float Convert::getFloat()
{
	return this->_float;
}

double Convert::getDouble()
{
	return this->_double;
}

/* ************************************************************************** */