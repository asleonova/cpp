/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:39:37 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/11 17:45:14 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <time.h>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	Form("Robotomy Request Form", 72, 45),
	_target(target)
	{
		srand(time(NULL));
	}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : 
	Form(src),
	_target(src._target)
{
	// this->_target = src._target;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	int fail = rand() % 2;
	if (fail == 1)
	{
		std::cout << CLYELLOW << "*** makes drilling noises ***" << CLEND << std::endl;
		std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;	
	}
	else
		std::cout << this->_target << " failed to be robotomized" << std::endl;
}

Form* RobotomyRequestForm::createNewForm(std::string target)
{
	return new RobotomyRequestForm(target);
}
 
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string RobotomyRequestForm::getTargetName() const
{
	return this->_target;
}
/* ************************************************************************** */