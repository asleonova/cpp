/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:57:53 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/18 19:10:37 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(int n) : _N(n)
{
	arr.reserve(_N);
}

// Span::Span( const Span & src )
// {
// }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Span &				Span::operator=( Span const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// // std::ostream &			operator<<( std::ostream & o, Span const & i )
// // {
// // 	//o << "Value = " << i.getValue();
// // 	return o;
// // }


/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int num)
{
	if (arr.size() < this->_N)
	{
		arr.push_back(num);
		std::cout << "element successfully added!" << std::endl;
	}
	else
		std::cout << "Storage is full" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */