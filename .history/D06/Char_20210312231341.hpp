/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:09:22 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 23:13:41 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_HPP
# define CHAR_HPP

# include <iostream>
# include <string>

class Char
{

	private:
		Char();
		std::string _input;
	public:
		Char(std::string _input);
		Char( Char const & src );
		~Char();

		Char &		operator=( Char const & rhs );


};

std::ostream &			operator<<( std::ostream & o, Char const & i );

#endif /* ************************************************************ CHAR_H */