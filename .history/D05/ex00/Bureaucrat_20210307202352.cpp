/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:43:25 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/07 20:23:52 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade > 150)
        Bureaucrat::GradeTooLowException();
    if (this->_grade < 1)
        Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade())
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    (void)rhs;
    return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
    o << "Name = " << i.getName();
    o << std::endl
      << "Current level: " << i.getGrade();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &Bureucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::IncrementGrade()
{
    if (this->_grade < 1)
        Bureaucrat::GradeTooHighException();
    this->_grade -= 1;
}

void Bureaucrat::DecrementGrade()
{
    if (this->_grade > 150)
        Bureaucrat::GradeTooLowException();
    this->_grade += 1;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */