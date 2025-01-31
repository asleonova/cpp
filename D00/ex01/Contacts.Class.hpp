/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:00:26 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/11 18:00:28 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
# include <iomanip>
# include <string>

class Contact {

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkerst_secret;

public:
    bool added;
    Contact(void);
    void add_contact_info(void);
    void print_contact_info(void);
    void print_table_info(int index);
    std::string get_short_name(std:: string name);
    ~Contact(void);
    
};

#endif