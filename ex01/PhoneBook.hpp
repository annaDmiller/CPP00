#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact arr[8];
        void    print_ind_contact(int ind);

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        
        void    add_contact(int ind);
        void    print_book(void);
};

#endif