/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:14:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/11 19:42:56 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}


Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form* Intern::makeForm(std::string const name, std::string const target)
{
	std::string type_names[3] = {
		"robotomy request",
		"presidential pardon request",
		"shrubbery creation request"
	};
	
	
	static Form* (forms[3]) = {
		RobotomyRequestForm::createNewForm(target),
		PresidentialPardonForm::createNewForm(target),
		ShrubberyCreationForm::createNewForm(target)		
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (type_names[i] == name)
		{
			std::cout << "Intern creates " << forms[i] << std::endl;
			return forms[i];
		}

	}
	// ERROR MESSAGE HERE!!!
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */