#include <iostream>
#include <string.h>

int main(void)
{
    std::string cmd;
    std::cout << "Hello! Welcome to the PhoneBook programm" << std::endl;
    std::cout << std::endl;

    while (1)
    {
        std::cout << "Please, type one of those commands: ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
        {
            std::cout << "EOF is detected. Exiting the program." << std::endl;
            break ;
        }
        if (cmd == "")
        {
            std::cout << "You typed an empty line. Please, try again." << std::endl;
            std::cout << std::endl;
            continue ;
        }
        if (cmd == "ADD")
        {
            std::cout << "You typed ADD." << std::endl;
            std::cout << std::endl;
            continue ;
        }
        if (cmd == "SEARCH")
        {
            std::cout << "You typed SEARCH." << std::endl;
            std::cout << std::endl;
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