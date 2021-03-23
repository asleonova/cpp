/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:57:53 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/22 21:47:16 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <exception>
#include <algorithm>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> arr;
		void noSpanToFind();
		Span();
	
	public:

		Span(int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void addNumber(int num);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();

		std::vector<int> getArray() const;

		class ConteinerIsEmptyException : public std::exception
		{
			virtual const char* what() const throw()
            {
                return ("error: the container is empty :( Add some elements there!");
            }		
		};

		class NumberIsLessThanRangeException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("error: the range of numbers you want to start with is less than the end.");
			}
		};

		class ConteinerHasOnlyOneElementException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("error: the container has only one element. Add more!");
			}
		};

		class StorageIsFullException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("error: the storage is full. You can't add more elements :(");
			}
		};	

};


std::ostream &operator<<(std::ostream &o, Span const &p);

#endif /* ************************************************************ SPAN_H */