#include <iostream>
#include "sculptor.hpp"

int main() {
    std::cout << "antes do construtor" << std::endl;
    int tamX,tamY,tamZ;
    std::cin>> tamX >>tamY >>tamZ;
    Sculptor teste(tamX,tamY,tamZ);
    return 0;
}