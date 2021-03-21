/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:03:10 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 19:19:06 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
template<typename T> 
class Mutantstack : public std::stack<T>
{

	public:

		Mutantstack();
		Mutantstack( Mutantstack const & src );
		~Mutantstack();

	//	Mutantstack &		operator=( Mutantstack const & rhs );
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		//inline iterator begin() { return iterator.begin(); }
    	//inline iterator end() { return iterator.end(); }

		iterator begin() { return std::stack<T>::c.begin(); }
		//iterator end();
// template <typename T>
// typename MutantStack<T>::iterator		MutantStack<T>::end(void)
// {
// 	return (this->c.end());
// }
	private:
	

};

// template <typename T>
// std::ostream &			operator<<( std::ostream & o, Mutantstack<T> const & i );

template <typename T>
Mutantstack<T>::Mutantstack()
{
}

template <typename T>
Mutantstack<T>::Mutantstack( const Mutantstack & src )
{
}
template <typename T>
Mutantstack<T>::~Mutantstack()
{
}
#endif /* ***************************************************** MUTANTSTACK_H */