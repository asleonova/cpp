/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:10:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/09 12:41:41 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{
	private:

		std::string const _name;
		bool _signed; // false at the beginning
		int const _sign_grade;
		int const _exec_grade;
		
	//	Form() {}
		Form &		operator=( Form const & rhs );
	public:

		Form(std::string name, int sign_grade, int exec_grade);	
		Form( Form const & src );
		virtual ~Form();

		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getIfSigned() const;
		



};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */