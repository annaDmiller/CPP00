#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_num;
        std::string secret;

    public:
        Contact(void);
        Contact(std::string fn, std::string ln, std::string nn, std::string num, std::string secret);
        ~Contact(void);

        void display_fname(int limit);
        void display_lname(int limit);
        void display_nickname(int limit);
        void display_phone_num(int limit);
        void display_secret(int limit);
};

#endif