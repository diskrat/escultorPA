#include <fstream>
#include <iostream>
#include "lerDeArquivo.hpp"
#include <sstream>
#include <string>
#include <vector>
enum class figura
{
    pvoxel,
    cvoxel,
    pbox,
    cbox,
    psphere,
    csphere,
    pelli,
    celli
};
figura qualFig(std::string _s)
{
    if (_s == "putvoxel")
    {
        return figura::pvoxel;
    }
    else
    {
        if (_s == "cutvoxel")
        {
            return figura::cvoxel;
        }
        else
        {
            if (_s == "putbox")
            {
                return figura::pbox;
            }
            else
            {
                if (_s == "cutbox")
                {
                    return figura::cbox;
                }
                else
                {
                    if (_s == "putsphere")
                    {
                        return figura::psphere;
                    }
                    else
                    {
                        if (_s == "cutsphere")
                        {
                            return figura::csphere;
                        }
                        else
                        {
                            if (_s == "putellipsoid")
                            {
                                return figura::pelli;
                            }
                            else
                            {
                                if (_s == "cutellipsoid")
                                {
                                    return figura::celli;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

lerDeArquivo::lerDeArquivo(const char *filename)
{
    int largura, altura, profundidade, x0, y0, z0, x1, y1, z1, radius, rx, ry, rz;
    float r, g, b, a;
    std::fstream fs(filename);
    std::string str;
    std::stringstream ss;
    if (!fs.is_open())
    {
        std::cout << "file not open" << std::endl;
        exit(1);
    }

    ///See if the file start with dim;
    fs >> str;
    if (str != "dim")
    {
        std::cout << "arquivo nao comecou com dim" << std::endl;
        exit(1);
    }
    fs >> largura >> altura >> profundidade;
    std::cout << "largura: " << largura << " altura: " << altura << " profundidade: " << profundidade << std::endl;

    ///Cria escultor agora
    auto t = new Sculptor(largura,altura,profundidade);
     

    switch (qualFig(str))
    {
    case figura::pvoxel:
        /* code */
        break;
    case figura::cvoxel:
        /* code */
        break;
    case figura::pbox:
        /* code */
        break;
    case figura::cbox:
        /* code */
        break;
    case figura::psphere:
        /* code */
        break;
    case figura::csphere:
        /* code */
        break;
    case figura::pelli:
        /* code */
        break;
    case figura::celli:
        /* code */
        break;
    default:
        std::cout << "erro na classe enum ou item nao especificado" << std::endl;
        exit(1);
        break;
    }

    /// create container
    std::vector<FiguraGeometrica *> fig;
}
