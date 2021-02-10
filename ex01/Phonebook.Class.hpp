#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include "Contacts.Class.hpp"

class Phonebook {
    
    private:
        Contact contact_list[8];
    public:
        
        Phonebook(void);
        void add_contact(void);
        void search_contact(void);
       // void print_table_content(std::string word);
        ~Phonebook(void);

};

#endif