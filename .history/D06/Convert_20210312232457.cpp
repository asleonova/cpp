/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:49 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 23:24:07 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Integer::Integer(std::string input) : _input(input)
{
}

Integer::Integer( const Integer & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Integer::~Integer()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Integer &				Integer::operator=( Integer const & rhs )
{
	if ( this != &rhs )
	{
		this->_input = rhs._input;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Integer const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

int Integer::convert()
{

}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */