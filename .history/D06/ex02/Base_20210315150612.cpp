/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:12:38 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/15 15:06:12 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Base::~Base()
{
}
/*
** --------------------------------- METHODS ----------------------------------
*/

Base* generate(void)
{
	int rand = rand % 3;
	Base* base;

	if (rand == 1)
	{
		base = new A;		
	}
	else if (rand == 2)
	{
		base = new B;
	}
	else
	{
		base = new C;
	}
	return (base);
}


void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);


/* ************************************************************************** */