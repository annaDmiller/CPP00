#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    std::cout << "Hello! Welcome to the PhoneBook programm" << std::endl;
    std::cout << std::endl;

    std::string cmd;
    PhoneBook   book;
    int         ind = 0;

    while (1)
    {
        if (std::cin.eof())
        {
            std::cout << "EOF is detected. Exiting the program." << std::endl;
            break ;
        }
        std::cout << "Please, type one of those commands: ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, cmd);
        if (cmd == "")
        {
            std::cout << "You typed an empty line. Please, try again." << std::endl;
            std::cout << std::endl;
            continue ;
        }
        if (cmd == "ADD")
        {
            std::cout << std::endl;
            if (ind ==  8)
                ind = 0;
            book.add_contact(ind);
            ind++;
            continue ;
        }
        if (cmd == "SEARCH")
        {
            std::cout << std::endl;
            book.print_book();
            continue ;
        }
        if (cmd == "EXIT")
        {
            std::cout << "You typed EXIT." << std::endl;
            break ;
        }
        std::cout << "You typed incorrect command. Please, try again." << std::endl;
        std::cout << std::endl;
    }
    return (0);
}