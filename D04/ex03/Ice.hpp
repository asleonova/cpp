/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:22:15 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/04 18:47:35 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        virtual ~Ice();
        Ice(Ice const & src);
        Ice & operator=(Ice const & rhs);

        virtual AMateria *clone() const;
        virtual void use(ICharacter & target);
};

#endif
