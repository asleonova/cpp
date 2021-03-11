/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:43:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/07 20:20:02 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define CLRED "\x1b[31m"
# define CLEND "\x1b[0m"
# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	private:
        std::string const _name;
        int _grade;
		Bureaucrat() {}
		Bureaucrat &		operator=( Bureaucrat const & rhs );

	public:
        Bureaucrat(std::string const name, int grade);        
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

        std::string const & getName() const;
        int getGrade() const;
        void IncrementGrade();
        void 

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