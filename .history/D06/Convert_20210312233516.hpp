/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:50 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 23:35:16 by dbliss           ###   ########.fr       */
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
		std::string _input;
	public:
		Convert(std::string input);
		Convert( Convert const & src );
		~Convert();
		int convert_to_int();
		double convert_to_double();
		float convert_to_float();
		char convert_to_char();
		

		Convert &		operator=( Convert const & rhs );


};

// std::ostream &			operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */