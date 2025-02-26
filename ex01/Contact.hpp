/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:39:09 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/15 18:39:12 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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

        void display_fname(int limit) const;
        void display_lname(int limit) const;
        void display_nickname(int limit) const;
        void display_phone_num(int limit) const;
        void display_secret(int limit) const;
        int empty_fname(void) const;
};

#endif
