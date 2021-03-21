/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:57:53 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 17:30:18 by dbliss           ###   ########.fr       */
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

Span::Span( const Span & src )
{
	
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_N = rhs._N;
		this->arr = rhs.arr;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Span::noSpanToFind()
{
	if (arr.empty())
		throw ConteinerIsEmptyException();
	if (arr.size() == 1)
		throw ConteinerHasOnlyOneElementException();
}

void Span::addNumber(int num)
{
	if (arr.size() < this->_N)
	{
		arr.push_back(num);
		std::cout << "element successfully added!" << std::endl;
	}
	else
		throw StorageIsFullException();
}

void Span::addNumber(int num, int amount)
{
	if (num > amount)
		throw NumberIsLessThanRangeException();
	for (int i = num ; i <= amount ; i++)
	{
		if (arr.size() >= this->_N)
			throw StorageIsFullException();
		arr.push_back(i);
	}
}

int Span::shortestSpan()
{
	noSpanToFind();
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
	noSpanToFind();
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