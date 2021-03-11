/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:10:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/11 15:57:25 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		std::string const _name;
		bool _signed; // false at the beginning
		unsigned int const _sign_grade;
		unsigned int const _exec_grade;
		
		Form();
		Form &		operator=( Form const & rhs );
	public:

		Form(std::string name, unsigned int sign_grade, unsigned int exec_grade);	
		Form( Form const & src );
		virtual ~Form();

		std::string getName() const;
		unsigned int getSignGrade() const;
		unsigned int getExecGrade() const;
		bool getIfSigned() const;

		void beSigned(Bureaucrat & target);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("The grade is to high, the max level is 1");
			}
		};

		class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("The grade is to low, the min level is 150");
            }
        };
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */