/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:49 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/14 18:48:17 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert(char* input) : _input(input)
{
	parser();
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
	o << "char: '" << i.getChar() <<  "'" << std::endl;
	o << "int: " << i.getInt() << std::endl;
	o << "float: " << i.getFloat() << std::endl;
	o << "double: " << i.getDouble() << std::endl;
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

void Convert::parser()
{
	// if Ok
	convert_to_double();
	convert_to_float();
	convert_to_int();

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

/* ************************************************************************** */