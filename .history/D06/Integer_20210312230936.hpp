/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:50 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 23:07:56 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
# define INTEGER_HPP

# include <iostream>
# include <string>

class Integer
{

	public:

		Integer();
		Integer( Integer const & src );
		~Integer();

		Integer &		operator=( Integer const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Integer const & i );

#endif /* ********************************************************* INTEGER_H */