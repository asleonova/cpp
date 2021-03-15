/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:12:47 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/15 14:12:52 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>

class A
{

	public:

		A();
		A( A const & src );
		~A();

		A &		operator=( A const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, A const & i );

#endif /* *************************************************************** A_H */