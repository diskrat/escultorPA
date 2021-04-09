#include <fstream>
#include <iostream>
#include "lerDeArquivo.hpp"
#include <sstream>
#include <string>

lerDeArquivo::lerDeArquivo(const char *filename)
{
    std::fstream fs(filename);
    std::stringstream ss;
    std::string str;
    if (!fs.is_open())
    {
        std::cout << "file not open" << std::endl;
        exit(1);
    }

    while (fs)
    {
        std::getline(fs, str);
        std::cout << str;
    }
}
