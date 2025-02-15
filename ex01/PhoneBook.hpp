#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
    private:
    Contact arr[8];

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        
        void    add_contact(int ind);
};

#endif