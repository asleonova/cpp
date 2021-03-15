/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:12:38 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/15 15:16:39 by dbliss           ###   ########.fr       */
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
		std::cout << "Base with type A has been created!" << std::endl;		
	}
	else if (rand == 2)
	{
		base = new B;
		std::cout << "Base with type B has been created!" << std::endl;
	}
	else
	{
		base = new C;
		std::cout << "Base with type C has been created!" << std::endl;
	}
	return (base);
}

void identify_from_pointer(Base * p)
{
	A* childA = dynamic_cast<A*>(p);
	if (childA != NULL)
	{
		std::cout << "Identification from pointer: type A" << std::endl;
	}
	B* childB = dynamic_cast<B*>(p);
	if (childB != NULL)
	{
		std::cout << "Identification from pointer: type B" << std::endl;
	}
	C* childC = dynamic_cast<C*>(p);
	if (childC != NULL)
	{
		std::cout << "Identification from pointer: type C" << std::endl;
	}

}

void identify_from_reference( Base & p);


/* ************************************************************************** */