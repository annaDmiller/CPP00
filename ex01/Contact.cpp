#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
    std::cout << "Input the first name of the contact :";
    std::cin >> this->first_name;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Input the last name of the contact :";
    std::cin >> this->last_name;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Input the nickname of the contact :";
    std::cin >> this->nickname;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Input the phone number of the contact :";
    std::cin >> this->phone_num;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Input the darkest secret of the contact :";
    std::cin >> this->secret;
    std::cout << std::endl;
    std::cout << std::endl;

    return ;
}

Contact::~Contact(void)
{
    return ;
}