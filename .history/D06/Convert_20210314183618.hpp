/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:50 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/14 18:36:18 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class Convert
{
	private:
		Convert();
		char*  _input;
		int _int;
		float _float;
		double _double;
		char _char;
		
	public:
		Convert(char* input);
		Convert( Convert const & src );
		~Convert();
		int convert_to_int();
		double convert_to_double();
		float convert_to_float();
		char convert_to_char();
		void display_int();
		void display_double();
		void display_float();
		void display_char();
		double getDouble();

		Convert &		operator=( Convert const & rhs );


};

// std::ostream &			operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */