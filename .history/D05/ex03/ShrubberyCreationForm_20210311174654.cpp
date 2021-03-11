/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:39:22 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/11 17:46:54 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src)
{
	this->_target = src._target;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string filename;
	filename = this->_target + "_shrubbery";
	std::ofstream ofs(filename);
	if (!ofs.is_open())
		throw ShrubberyCreationForm::OpenFileException();
		for (int i = 0; i < 3; i++)
		{

			ofs << "               ,@@@@@@@,                 " << std::endl
				<< "       ,,,.   ,@@@@@@/@@,  .oo8888o.     " << std::endl
				<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o    " << std::endl
				<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   " << std::endl
				<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   " << std::endl
				<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'    " << std::endl
				<< "   &%\\ /%&'    |.|        \\ '|8'      " << std::endl
				<< "       |o|         | |         | |        " << std::endl
				<< "       |.|         | |         | |        " << std::endl
				<< "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
		}
		ofs.close();
}

Form* ShrubberyCreationForm::createNewForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ShrubberyCreationForm::getTargetName() const
{
	return this->_target;
}
/* ************************************************************************** */