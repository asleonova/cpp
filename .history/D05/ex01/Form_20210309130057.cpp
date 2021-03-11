/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:10:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/09 13:00:57 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, unsigned int sign_grade, unsigned int exec_grade) : 
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
	o << "Name: " << i.getName() << std::endl;
	o << "Sign Grade: " << i.getSignGrade() << std::endl;
	o << "Executable Grade: " << i.getExecGrade() << std::endl;
	o << "If Signed or not: " << i.getIfSigned() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const
{
	return this->_name;
}

int Form::getSignGrade() const
{
	return this->_sign_grade;
}

int Form::getExecGrade() const
{
	return this->_exec_grade;
}

bool Form::getIfSigned() const
{
	return this->_signed;
}

/* ************************************************************************** */