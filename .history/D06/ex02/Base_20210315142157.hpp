/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:12:38 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/15 14:21:57 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{

	public:
		virtual ~Base();

};

Base* generate(void);
void identify_from_pointer(Base * p);

#endif /* ************************************************************ BASE_H */