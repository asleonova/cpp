/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:57:53 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/18 19:31:55 by dbliss           ###   ########.fr       */
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
			
		}

};

//std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */