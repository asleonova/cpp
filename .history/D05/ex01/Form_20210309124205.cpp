/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:10:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/09 12:42:05 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, int sign_grade, int exec_grade) : 
	_name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	this->_signed = false;
}

Form::Form(const Form & src) : 
	_name(src._name), 
	_sign_grade(src._sign_grade),
	_exec_grade(src._exec_grade),
{
	this->_signed = src._signed;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string & Form::getName() const
{
	return this->_name;
} 
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */