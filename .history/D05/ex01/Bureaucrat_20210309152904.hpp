/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:43:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/09 15:29:04 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define CLRED "\x1b[31m"
# define CLGREEN "\x1b[32m"
# define CLBLUE "\x1b[34m"
# define CLEND "\x1b[0m"
# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
        std::string const _name;
        unsigned int _grade;
		Bureaucrat() {}
		Bureaucrat &		operator=( Bureaucrat const & rhs );

	public:
        Bureaucrat(std::string const name, unsigned int grade);        
		Bureaucrat( Bureaucrat const & src );
		virtual ~Bureaucrat();

        std::string const & getName() const;
        unsigned int getGrade() const;
        void IncrementGrade();
        void DecrementGrade();
        void signForm(Form & form);

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

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */