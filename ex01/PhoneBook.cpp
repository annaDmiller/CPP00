#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void    PhoneBook::add_contact(int ind)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_num;
    std::string secret;

    std::cout << "Input the first name of the contact : ";
    std::getline(std::cin, first_name);
    std::cout << std::endl;
    if (std::cin.eof())
    {
        std::cout << "EOF is detected. Exiting the program." << std::endl;
        exit(1);
    }

    std::cout << "Input the last name of the contact : ";
    std::getline(std::cin, last_name);
    std::cout << std::endl;
    if (std::cin.eof())
    {
        std::cout << "EOF is detected. Exiting the program." << std::endl;
        exit(1);
    }

    std::cout << "Input the nickname of the contact : ";
    std::getline(std::cin, nickname);
    std::cout << std::endl;
    if (std::cin.eof())
    {
        std::cout << "EOF is detected. Exiting the program." << std::endl;
        exit(1);
    }

    std::cout << "Input the phone number of the contact : ";
    std::getline(std::cin, phone_num);
    std::cout << std::endl;
    if (std::cin.eof())
    {
        std::cout << "EOF is detected. Exiting the program." << std::endl;
        exit(1);
    }

    std::cout << "Input the darkest secret of the contact : ";
    std::getline(std::cin, secret);
    std::cout << std::endl;
    if (std::cin.eof())
    {
        std::cout << "EOF is detected. Exiting the program." << std::endl;
        exit(1);
    }

    this->arr[ind] = Contact(first_name, last_name, nickname, phone_num, secret);

    std::cout << "A contact is added to the phonebook." << std::endl;
    return ;
}