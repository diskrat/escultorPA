#include <cstdlib>
#include <iostream>
#include "sculptor.h"

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    this->nx = _nx;
    this->ny = _ny;
    this->nz = _nz;
    this->r = 0.0;
    this->g = 0.0;
    this->b = 0.0;
    this->a = 0.0;
    Voxel ***v = new Voxel **[_nx];
    for (int i = 0; i < _nx; i++)
    {
        v[i] = new Voxel *[_ny];
        for (int j = 0; j < _ny; j++)
        {
            v[i][j] = new Voxel[_nz];
            for (int k = 0; k < _nz; k++)
            {
                v[i][j][k].r = 0;
                v[i][j][k].g = 0;
                v[i][j][k].b = 0;
                v[i][j][k].a = 0;
                v[i][j][k].isOn = false;
                // std::cout << v[i][j][k].isOn << " ";
            }
            // std::cout << std::endl;
        }
        // std::cout << std::endl;
    }

    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            for (int k = 0; k < nz; k++)
            {
                // std::cout << "v[" << i << "][" << j << "][" << k << "]: " << &v[i][j][k] << std::endl;
            }
        }
    }
}

Sculptor::~Sculptor()
{
    /*
    std::cout << "destrutores" << std::endl;
    for (int i = 0; i < nx; i++)
    {
        std::cout << "v[" << i << "] " << &v << std::endl;
        for (int j = 0; j < ny; j++)
        {
            std::cout << "v[" << i << "][" << j << "] " << &v[i][j] << std::endl;
            delete[] v[i][j];
        }
        delete[] v[i];
    }
    delete[] v;
    std::cout << "fim dos destrutores" << std::endl;
    */
}

void Sculptor::setColor(float r, float g, float b, float alpha)
{
}

void Sculptor::putVoxel(int x, int y, int z)
{
}

void Sculptor::cutVoxel(int x, int y, int z)
{
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
}

void Sculptor::writeOFF(char *filename)
{
}
