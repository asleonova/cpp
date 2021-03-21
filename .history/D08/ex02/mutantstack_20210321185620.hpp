/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:03:10 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 18:56:20 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>

template<typename T> 
class Mutantstack : public std::stack<T>
{

	public:

		Mutantstack();
		Mutantstack( Mutantstack const & src );
		~Mutantstack();

		Mutantstack &		operator=( Mutantstack const & rhs );
		typedef typename std::deque<T>::iterator iterator;
		
		inline iterator begin() { return iterator.begin(); }
    	inline iterator end() { return iterator.end(); }

template <typename T>
typename MutantStack<T>::iterator		MutantStack<T>::end(void)
{
	return (this->c.end());
}
	private:
	

};

template <typename T>
std::ostream &			operator<<( std::ostream & o, Mutantstack<T> const & i );

#endif /* ***************************************************** MUTANTSTACK_H */