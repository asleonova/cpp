/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:07:58 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 23:15:21 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOAT_HPP
# define FLOAT_HPP

# include <iostream>
# include <string>

class Float
{
	private:
		Float();
		std::string _input;
	
	public:
		Float(std::string input);
		Float( Float const & src );
		~Float();

		Float &		operator=( Float const & rhs );


};

std::ostream &			operator<<( std::ostream & o, Float const & i );

#endif /* *********************************************************** FLOAT_H */