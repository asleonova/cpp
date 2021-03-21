/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:57:53 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/18 19:39:03 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <exception>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> arr;
		void noSpanToFind();
		Span();
	
	public:

		Span(int n);
		//Span( Span const & src );
		~Span();

//		Span &		operator=( Span const & rhs );

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();

		class ConteinerIsEmptyException : public std::exception
		{
			virtual const char* what() const throw()
            {
                return ("error: the container is empty :( Add some elements there!");
            }		
		};

		class ConteinerHasOnlyOneElementException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("error: the container has only one element. Add more!");
			}
		};

};

//std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */