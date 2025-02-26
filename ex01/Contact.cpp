/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:39:17 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/15 18:39:18 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void    Contact::display_fname(int limit) const
{
    size_t  length = (this->first_name).length();

    if (limit == 10)
    {
        if (length <= 10)
        {
            for (size_t ind = 0; ind < 10 - length; ind++)
                std::cout.put(' ');
            std::cout << this->first_name;
        }
        else if (length > 10)
        {
            std::cout << (this->first_name).substr(0, 9);
            std::cout.put('.');
        }
    }
    else
        std::cout << this->first_name;
    return ;
}

void    Contact::display_lname(int limit) const
{
    size_t  length = (this->last_name).length();

    if (limit == 10)
    {
        if (length <= 10)
        {
            for (size_t ind = 0; ind < 10 - length; ind++)
                std::cout.put(' ');
            std::cout << this->last_name;
        }
        else if (length > 10)
        {
            std::cout << (this->last_name).substr(0, 9);
            std::cout.put('.');
        }
    }
    else
        std::cout << this->last_name;
    return ;
}

void    Contact::display_nickname(int limit) const
{
    size_t  length = (this->nickname).length();

    if (limit == 10)
    {
        if (length <= 10)
        {
            for (size_t ind = 0; ind < 10 - length; ind++)
                std::cout.put(' ');
            std::cout << this->nickname;
        }
        else if (length > 10)
        {
            std::cout << (this->nickname).substr(0, 9);
            std::cout.put('.');
        }
    }
    else
        std::cout << this->nickname;
    return ;
}

void    Contact::display_phone_num(int limit) const
{
    size_t  length = (this->phone_num).length();

    if (limit == 10)
    {
        if (length <= 10)
        {
            for (size_t ind = 0; ind < 10 - length; ind++)
                std::cout.put(' ');
            std::cout << this->phone_num;
        }
        else if (length > 10)
        {
            std::cout << (this->phone_num).substr(0, 9);
            std::cout.put('.');
        }
    }
    else
        std::cout << this->phone_num;
    return ;
}

void    Contact::display_secret(int limit) const
{
    size_t  length = (this->secret).length();

    if (limit == 10)
    {
        if (length <= 10)
        {
            for (size_t ind = 0; ind < 10 - length; ind++)
                std::cout.put(' ');
            std::cout << this->secret;
        }
        else if (length > 10)
        {
            std::cout << (this->secret).substr(0, 9);
            std::cout.put('.');
        }
    }
    else
        std::cout << this->secret;
    return ;
}

int Contact::empty_fname(void) const
{
    if (this->first_name == "")
        return (1);
    return (0);
}