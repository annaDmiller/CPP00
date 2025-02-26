/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:39:27 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/15 18:39:28 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    while (1)
    {
        std::cout << "Input the first name of the contact : ";
        std::getline(std::cin, first_name);
        std::cout << std::endl;
        if (first_name != "")
            break ;
        if (std::cin.eof())
            return ;
        std::cout << "First name can't be empty. Please, enter once more." << std::endl;
        std::cout << std::endl;
    }

    while (1)
    {
        std::cout << "Input the last name of the contact : ";
        std::getline(std::cin, last_name);
        std::cout << std::endl;
        if (last_name != "")
            break ;
        if (std::cin.eof())
            return ;
        std::cout << "Last name can't be empty. Please, enter once more." << std::endl;
        std::cout << std::endl;
    }

    while (1)
    {
        std::cout << "Input the nickname of the contact : ";
        std::getline(std::cin, nickname);
        std::cout << std::endl;
        if (nickname != "")
            break ;
        if (std::cin.eof())
            return ;
        std::cout << "Nickname can't be empty. Please, enter once more." << std::endl;
        std::cout << std::endl;
    }
    while (1)
    {
        std::cout << "Input the phone number of the contact : ";
        std::getline(std::cin, phone_num);
        std::cout << std::endl;
        if (phone_num != "")
            break ;
        if (std::cin.eof())
            return ;
        std::cout << "Phone number can't be empty. Please, enter once more." << std::endl;
        std::cout << std::endl;
    }
    while (1)
    {
        std::cout << "Input the darkest secret of the contact : ";
        std::getline(std::cin, secret);
        std::cout << std::endl;
        if (secret != "")
            break ;
        if (std::cin.eof())
            return ;
        std::cout << "Darkest secret can't be empty. Please, enter once more." << std::endl;
        std::cout << std::endl;
    }

    this->arr[ind] = Contact(first_name, last_name, nickname, phone_num, secret);

    std::cout << "A contact is added to the phonebook." << std::endl;
    return ;
}

void    PhoneBook::print_book(void) const
{
    std::string str_ind;
    int         ind;

    std::cout << "    Index|First name| Last name|  Nickname|" << std::endl;
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
    if ((this->arr[0]).empty_fname())
    {
        std::cout << "Phonebook is empty. Nothing to search." << std::endl;
        std::cout << std::endl;
        return ;
    }
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
        ind = std::atoi(str_ind.c_str());
        if (ind > 7 || ind < 0 || (ind == 0 && str_ind != "0"))
        {
            std::cout << "Incorrect index. Please, try again." << std::endl;
            continue ;
        }
        if (this->arr[ind].empty_fname())
        {
            std::cout << "The phonebook line for index " << ind << " is empty" << std::endl;
            std::cout << std::endl;
            return ;
        }
        this->print_ind_contact(ind);
        break ;
    }
    return ;
}

void    PhoneBook::print_ind_contact(int ind) const
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
