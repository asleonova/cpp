/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:14:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 19:09:13 by dbliss           ###   ########.fr       */
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
	(void)rhs;
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
	
	/*
	createNewForm are static methods of different classes which allow
	us to use them here, in different class, without initializing the object of a class
	*/

	Form* (*forms[3]) = {
		RobotomyRequestForm::createNewForm(target),
		PresidentialPardonForm::createNewForm(target),
		ShrubberyCreationForm::createNewForm(target)		
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (type_names[i] == name)
		{
			std::cout << "Intern creates " << forms[i]->getName() << std::endl;
			return forms[i];
		}

	}
	std::cout << CLRED << "Sorry, the requested form is unknown...Intern only knows these following forms :" << CLEND << std::endl;
	std::cout << CLBLUE << "'robotomy request' , 'presidential pardon request', 'shrubbery creation request'" << CLEND << std::endl; 
	return (nullptr);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */