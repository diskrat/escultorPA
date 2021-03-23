#include <iostream>
#include "sculptor.hpp"

int main() {
    int tamX,tamY,tamZ;
    std::cout << "insira tamanho do escultor" << std::endl;
    std::cin>> tamX >>tamY >>tamZ;
    Sculptor teste(tamX,tamY,tamZ);
    teste.setColor(1,1,1,1);
    teste.putVoxel(0,0,0);
    std::cout << "escreve em arquivo" << std::endl;
    teste.writeOFF("teste.off");
    std::cout << "terminou escrita" << std::endl;

    return 0;
}