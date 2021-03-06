/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 11:40:46 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/06 16:08:20 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materiasTypes[4];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(MateriaSource const & src);
        MateriaSource & operator=(MateriaSource const & rhs); 

        virtual void learnMateria(AMateria *materia);
        virtual AMateria *createMateria(std::string const &type);
};

#endif