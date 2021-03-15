/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:12:38 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/15 15:39:31 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Base
{

	public:
		virtual ~Base();

};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base* generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);

#endif /* ************************************************************ BASE_H */