#include <iostream>
#include "sculptor.h"

int main() {
    std::cout << "antes do construtor" << std::endl;
    int tamX,tamY,tamZ;
    std::cin>> tamX >>tamY >>tamZ;
    Sculptor teste(tamX,tamY,tamZ);
    std::cout << sizeof(teste) << std::endl;
    return 0;
}