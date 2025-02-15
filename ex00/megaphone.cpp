/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:38:58 by amelniko          #+#    #+#             */
/*   Updated: 2025/02/15 18:39:00 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int ind_word = 1; ind_word < argc; ind_word++)
    {
        for (int ind_letter = 0; argv[ind_word][ind_letter]; ind_letter++)
        {
            if (argv[ind_word][ind_letter] >= 'a' && argv[ind_word][ind_letter] <= 'z')
                std::cout.put(argv[ind_word][ind_letter] - ('a' - 'A'));
            else
                std::cout.put(argv[ind_word][ind_letter]);
        }
    }
    std::cout << std::endl;
    return (0);
}
