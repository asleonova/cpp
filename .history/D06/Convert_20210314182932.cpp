/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:49 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/14 18:29:32 by dbliss           ###   ########.fr       */
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

// std::ostream &			operator<<( std::ostream & o, Convert const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


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


/* ************************************************************************** */