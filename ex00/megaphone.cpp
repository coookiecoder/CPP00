#include <iostream>
#include <string>

int     main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        std::string str = argv[i];
        for (size_t j = 0; j < str.length(); j++)
            std::cout << (char)std::toupper(str[j]);
        if (i != argc - 1)
            std::cout << ' ';
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}