/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:03:10 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/21 19:53:50 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
template <typename T>
class Mutantstack : public std::stack<T>
{

public:
	Mutantstack();
	Mutantstack(Mutantstack const &src);
	~Mutantstack();

	//	Mutantstack &		operator=( Mutantstack const & rhs );
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	//inline iterator begin() { return iterator.begin(); }
	//inline iterator end() { return iterator.end(); }
	const_iterator cbegin() { return std::stack<T>::c.cbegin(); }
	const_iterator cend() { return std::stack<T>::c.cend(); }
	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
	reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); }
	reverse_iterator rend() { return std::stack<T>::c.rend(); }
	const_reverse_iterator crbegin() { return std::stack<T>::c.crbegin(); }
	const_reverse_iterator crend() { return std::stack<T>::c.crend(); }
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
Mutantstack<T>::Mutantstack(const Mutantstack &src)
{
}
template <typename T>
Mutantstack<T>::~Mutantstack()
{
}
#endif /* ***************************************************** MUTANTSTACK_H */