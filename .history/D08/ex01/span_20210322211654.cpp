/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:57:53 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/22 21:16:54 by dbliss           ###   ########.fr       */
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

Span::Span(const Span &src)
{
	this->_N = src._N;
	this->arr = src.arr;
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

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
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
	if (arr.size() >= this->_N)
	{
		throw StorageIsFullException();
	}
	arr.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (begin > end)
		throw NumberIsLessThanRangeException();
	for (; begin != end; begin++)
	{
		if (arr.size() >= this->_N)
			throw StorageIsFullException();
		arr.push_back(*begin);
	}
}

int Span::shortestSpan()
{
	noSpanToFind();
	int shortest = arr[0];
	std::sort(this->arr.begin(), this->arr.end());
	std::vector<int>::iterator it = this->arr.begin();
	std::vector<int>::iterator ite = this->arr.end();
	for (; it != ite; it++)
	{
		shortest = *(it + 1) - *it;
	}
	return shortest;
}

int Span::longestSpan()
{
	noSpanToFind();
	std::sort(this->arr.begin(), this->arr.end());
	int longest = *(this->arr.end() - 1) - *(this->arr.begin());
	return (longest);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */