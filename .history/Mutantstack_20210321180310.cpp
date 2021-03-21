/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:03:09 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 18:03:10 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Mutantstack::Mutantstack()
{
}

Mutantstack::Mutantstack( const Mutantstack & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Mutantstack::~Mutantstack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Mutantstack &				Mutantstack::operator=( Mutantstack const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Mutantstack const & i )
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