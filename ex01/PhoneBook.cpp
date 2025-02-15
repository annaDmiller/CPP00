#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "All the contacts of phonebook are deleted." << std::endl;
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
        return ;

    std::cout << "Input the last name of the contact : ";
    std::getline(std::cin, last_name);
    std::cout << std::endl;
    if (std::cin.eof())
        return ;

    std::cout << "Input the nickname of the contact : ";
    std::getline(std::cin, nickname);
    std::cout << std::endl;
    if (std::cin.eof())
        return ;

    std::cout << "Input the phone number of the contact : ";
    std::getline(std::cin, phone_num);
    std::cout << std::endl;
    if (std::cin.eof())
        return ;

    std::cout << "Input the darkest secret of the contact : ";
    std::getline(std::cin, secret);
    std::cout << std::endl;
    if (std::cin.eof())
        return ;

    this->arr[ind] = Contact(first_name, last_name, nickname, phone_num, secret);

    std::cout << "A contact is added to the phonebook." << std::endl;
    return ;
}

void    PhoneBook::print_book(void)
{
    size_t      length_word;
    std::string str_ind;
    int         ind;

    for (int ind = 0; ind < 8; ind++)
    {
        std::cout.put('\t');
        std::cout << ind;
        std::cout.put('|');
        (this->arr[ind]).display_fname(10);
        std::cout.put('|');
        (this->arr[ind]).display_lname(10);
        std::cout.put('|');
        (this->arr[ind]).display_nickname(10);
        std::cout.put('|');
        std::cout << std::endl;
    }
    std::cout << std::endl;
    while (1)
    {
        std::cout << std::endl;
        std::cout << "Write the index to display full information about contact : ";
        getline(std::cin, str_ind);
        std::cout << std::endl;
        if (std::cin.eof())
            return ;
        if (str_ind == "")
        {
            std::cout << "Empty line is input. Please, try again." << std::endl;
            continue ;
        }
        ind = std::stoi(str_ind);
        if (ind > 7 || ind < 0)
        {
            std::cout << "Incorrect index. Please, try again." << std::endl;
            continue ;
        }
        this->print_ind_contact(ind);
        break ;
    }
    return ;
}

void    PhoneBook::print_ind_contact(int ind)
{
    std::cout << "Information about contact under index " << ind << " is shown below:" << std::endl;

    std::cout << "First name - ";
    (this->arr[ind]).display_fname(0);
    std::cout << std::endl;

    std::cout << "Last name - ";
    (this->arr[ind]).display_lname(0);
    std::cout << std::endl;

    std::cout << "Nickname - ";
    (this->arr[ind]).display_nickname(0);
    std::cout << std::endl;

    std::cout << "Phone number - ";
    (this->arr[ind]).display_phone_num(0);
    std::cout << std::endl;

    std::cout << "Darkest secret - ";
    (this->arr[ind]).display_secret(0);
    std::cout << std::endl;
    std::cout << std::endl;
    return ;
}