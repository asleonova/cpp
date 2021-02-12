/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:01:07 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/11 18:01:09 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
# include <string>
#include "Contacts.Class.hpp"

class Phonebook {
    
    private:
        Contact contact_list[8];
    public:
        
        Phonebook(void);
        void add_contact(void);
        void search_contact(void);
        ~Phonebook(void);

};

#endif