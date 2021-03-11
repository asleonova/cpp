/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:14:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/11 19:38:24 by dbliss           ###   ########.fr       */
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


typedef Form * (Intern::*form_constr) (std::string target);

Form* Intern::makeForm(std::string const name, std::string const target)
{
	std::string type_names[3] = {
		"robotomy request",
		"presidential pardon request",
		"shrubbery creation request"
	};
	
	
	static Form* (*forms[3])(std::string) = {
		RobotomyRequestForm::createNewForm(target),
		PresidentialPardonForm::createNewForm,
		ShrubberyCreationForm::createNewForm		
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (type_names[i] == name)
		{
			std::cout << "Intern creates " << "form" << std::endl;
			return ;
		}

	}
	// ERROR MESSAGE HERE!!!
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */