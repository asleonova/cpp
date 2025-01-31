/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:58 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 23:18:10 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Float.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Float::Float()
{
}

Float::Float( const Float & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Float::~Float()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Float &				Float::operator=( Float const & rhs )
{	
	if ( this != &rhs )
	{
		this->_input = rhs._input;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Float const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */