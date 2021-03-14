/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:08:06 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/12 23:08:07 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_HPP
# define DOUBLE_HPP

# include <iostream>
# include <string>

class Double
{

	public:

		Double();
		Double( Double const & src );
		~Double();

		Double &		operator=( Double const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Double const & i );

#endif /* ********************************************************** DOUBLE_H */