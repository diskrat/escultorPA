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
                                else
                                {
                                    exit(1);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

lerDeArquivo::lerDeArquivo(const char *fin, char *fout)
{
    int largura, altura, profundidade, x0, y0, z0, x1, y1, z1, radius, rx, ry, rz;
    float r, g, b, a;
    std::fstream fs(fin);
    std::string s;
    std::stringstream ss;
    if (!fs.is_open())
    {
        std::cout << "file not open" << std::endl;
        exit(1);
    }

    ///See if the file start with dim;
    std::getline(fs, s);
    ss.clear();
    ss.str(s);
    ss >> s;
    if (s != "dim")
    {
        std::cout << "arquivo nao comecou com dim" << std::endl;
        exit(1);
    }
    ///Cria escultor agora
    ss >> largura >> altura >> profundidade;
    Sculptor la(largura, altura, profundidade);
    ///cria container e adiciona ao container
    std::vector<FiguraGeometrica *> fig;
    while (std::getline(fs, s))
    {
        ss.clear();
        ss.str(s);
        ss >> s;
        switch (qualFig(s))
        {
        case figura::pvoxel:
            ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
            fig.push_back(new PutVoxel(x0, y0, z0, r, g, b, a));
            break;
        case figura::cvoxel:
            ss >> x0 >> y0 >> z0;
            fig.push_back(new CutVoxel(x0, y0, z0));
            break;
        case figura::pbox:
            ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
            fig.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
            break;
        case figura::cbox:
            ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
            fig.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
            break;
        case figura::psphere:
            ss >> x0 >> y0 >> z0 >> radius >> r >> g >> b >> a;
            fig.push_back(new PutSphere(x0, y0, z0, radius, r, g, b, a));
            break;
        case figura::csphere:
            ss >> x0 >> y0 >> z0 >> radius;
            fig.push_back(new CutSphere(x0, y0, z0, radius));
            break;
        case figura::pelli:
            ss >> x0 >> y0 >> z0 >> rx >> ry >> rz >> r >> g >> b >> a;
            fig.push_back(new PutEllipsoid(x0, y0, z0, rx, ry, rz, r, g, b, a));
            break;
        case figura::celli:

            ss >> x0 >> y0 >> z0 >> rx >> ry >> rz;

            fig.push_back(new CutEllipsoid(x0, y0, z0, rx, ry, rz));
            break;
        default:

            std::cout << "erro na classe enum ou item nao especificado" << std::endl;
            exit(1);
            break;
        }
    }
    for (auto i : fig)
    {
        i->draw(la);
    }
    la.writeOFF(fout);
    ///detrutores dos ponteiros em fig e do objeto sculptor
    for (auto i : fig)
    {
        delete i;
    }
}
