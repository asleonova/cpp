/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:43:25 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/09 13:15:18 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
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
    o << "Name: " << i.getName();
    o << std::endl
      << "Current level: " << i.getGrade();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::IncrementGrade()
{
    if (this->_grade - 1  < 1 || this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= 1;
}

void Bureaucrat::DecrementGrade()
{
    if (this->_grade + 1 > 150 || this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += 1;
}

void Bureaucrat::signForm(Form & form)
{
    if (form.getIfSigned() == true)
        std::cout << this->_name << "signs " << form.getName() << std::endl;
    else
        std::cout << this->_name << "cannot sign " << form.getName() << "because" << 
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const &Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}


/* ************************************************************************** */