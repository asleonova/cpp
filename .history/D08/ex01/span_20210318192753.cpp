/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:57:53 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/18 19:27:53 by dbliss           ###   ########.fr       */
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
	else // Here need to throw the exception!!!!
		std::cout << "Storage is full" << std::endl;
}

int Span::shortestSpan()
{
	if (arr.empty() || arr.size() == 1)
		std::cout << "Cont is empty or there's only one element" << std::endl;
	int smallest = arr[0];
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		if (arr[i] < smallest)
			smallest = arr[i];
	}
	return (smallest);
}

int Span::longestSpan()
{
	int longest = arr[0];
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > longest)
			longest = arr[i];
	}
	return (longest);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */