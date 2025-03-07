/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:39:22 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/15 18:39:23 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstdlib>

class PhoneBook
{
    private:
        Contact arr[8];
        void    print_ind_contact(int ind) const;

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        
        void    add_contact(int ind);
        void    print_book(void) const;
};

#endif
