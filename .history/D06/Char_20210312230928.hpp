/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:09:22 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 23:09:26 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_HPP
# define CHAR_HPP

# include <iostream>
# include <string>

class Char
{

	public:

		Char();
		Char( Char const & src );
		~Char();

		Char &		operator=( Char const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Char const & i );

#endif /* ************************************************************ CHAR_H */