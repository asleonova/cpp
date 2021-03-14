/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:08:06 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 23:20:44 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Double.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Double::Double(std::string input) : _input(input)
{
}

Double::Double( const Double & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Double::~Double()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Double &				Double::operator=( Double const & rhs )
{
	if ( this != &rhs )
	{
		this->_input = rhs._input;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Double const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */