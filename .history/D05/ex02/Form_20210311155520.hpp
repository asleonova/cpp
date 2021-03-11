/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:10:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/11 15:55:20 by dbliss           ###   ########.fr       */
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
		// Placing the assignment operator to private, because othervise, 
		// it won't make any sense to assign one intance to another when it can't assign to all data members (e.g. we have const name)
		Form &		operator=( Form const & rhs );
		Form();
		
	public:

Form &		operator=( Form const & rhs );
		Form(std::string name, unsigned int sign_grade, unsigned int exec_grade);	
		Form( Form const & src );
		virtual ~Form();

		virtual void execute(Bureaucrat const & executor) const = 0;

		std::string getName() const;
		unsigned int getSignGrade() const;
		unsigned int getExecGrade() const;
		bool getIfSigned() const;

		void beSigned(Bureaucrat & target);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("the grade is too high!");
			}
		};

		class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("the grade is too low!");
            }
        };

		class FormNotSignedException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("The form wasn't signed");
			}
		};
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */