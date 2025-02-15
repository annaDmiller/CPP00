#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void)
{
    return ;
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string num, std::string secret)
    : first_name(fn), last_name(ln), nickname(nn), phone_num(num), secret(secret)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}