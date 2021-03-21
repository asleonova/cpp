/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:03:10 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 18:08:44 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>

template<type>
class Mutantstack
{

	public:

		Mutantstack();
		Mutantstack( Mutantstack const & src );
		~Mutantstack();

		Mutantstack &		operator=( Mutantstack const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Mutantstack const & i );

#endif /* ***************************************************** MUTANTSTACK_H */