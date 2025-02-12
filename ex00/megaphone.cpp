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