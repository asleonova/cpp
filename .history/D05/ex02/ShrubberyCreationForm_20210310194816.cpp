/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:39:22 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/10 19:48:16 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	Form("Shrubbery Creation Form", 145, 137), _target(target)
{	
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src)
{
	*this = src;
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

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}

	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string filename;
	filename = this->_target + "_shrubbery";
	std::ofstream ofs(filename);
	ofs << 
   	CLGREEN <<"               ,@@@@@@@,                 " << CLEND << std::endl << \
   	CLGREEN <<"      ,,,.   ,@@@@@@/@@,  .oo8888o.     " << CLEND << std::endl << \ 
   	CLGREEN <<",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o    " << CLEND << std::endl << \
   	CLGREEN <<" ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   " << CLEND << std::endl << \
   	CLGREEN <<" %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   " << CLEND << std::endl << \
   	CLGREEN <<"  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'    " << CLEND << std::endl << \
   	CLYELLOW <<"  &%\\ /%&'    |.|        \\ '|8'      " << CLEND << std::endl << \
   	CLYELLOW <<"     |o|         | |         | |        " << CLEND << std::endl << \
   	CLYELLOW <<"      |.|         | |         | |        " << CLEND << std::endl << \
   	CLYELLOW <<"  \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ " << CLEND;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ShrubberyCreationForm::getTargetName()
{
	return this->_target;
}
/* ************************************************************************** */