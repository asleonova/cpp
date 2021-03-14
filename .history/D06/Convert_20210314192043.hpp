/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:50 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/14 19:20:43 by dbliss           ###   ########.fr       */
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
		bool is_char;
		int convert_to_int();
		double convert_to_double();
		float convert_to_float();
		void parser();
	
	public:
		Convert(char* input);
		Convert( Convert const & src );
		~Convert();

		bool convert_to_char();	

		double getDouble() const;
		float getFloat() const;
		int getInt() const;
		char getChar() const;

		Convert &		operator=( Convert const & rhs );


};

 std::ostream &			operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */