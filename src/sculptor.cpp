#include <cstdlib>
#include <iostream>
#include "sculptor.hpp"
#include <vector>
#include <fstream>
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
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{
    this->v[x][y][z].isOn = true;
    this->v[x][y][z].r = this->r;
    this->v[x][y][z].g = this->g;
    this->v[x][y][z].b = this->b;
    this->v[x][y][z].a = this->a;
}

void Sculptor::cutVoxel(int x, int y, int z)
{
    this->v[x][y][z].isOn = false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    for (int i = x0; i < x1; i++)
    {
        for (int j = y0; j < y1; j++)
        {
            for (int k = z0; k < z1; k++)
            {
                this->putVoxel(i, j, k);
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    for (int i = x0; i < x1; i++)
    {
        for (int j = y0; j < y1; j++)
        {
            for (int k = z0; k < z1; k++)
            {
                this->cutVoxel(i, j, k);
            }
        }
    }
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
    std::fstream f;
    int vOn = 0, i, j, k;
    for (i = 0; i < nx; i++)
    {
        for (j = 0; j < ny; j++)
        {
            for (k = 0; k < nz; k++)
            {
                if (this->v[i][j][k].isOn)
                {
                    vOn++;
                }
            }
        }
    }
    //uso de stream
    f.open(filename);
    if (!f.is_open())
    {
        exit(1);
    }
    f << "OFF" << std::endl;
    f << 8 * vOn << " " << 6 * vOn << " 0" << std::endl;

    for (i = 0; i < nx; i++)
    {
        for (j = 0; j < ny; j++)
        {
            for (k = 0; k < nz; k++)
            {
                if (this->v[i][j][k].isOn)
                {
                    // mais stream
                    f << i - 0.5 << " " << j + 0.5 << " " << k - 0.5 << std::endl;
                    f << i - 0.5 << " " << j - 0.5 << " " << k - 0.5 << std::endl;
                    f << i + 0.5 << " " << j - 0.5 << " " << k - 0.5 << std::endl;
                    f << i + 0.5 << " " << j + 0.5 << " " << k - 0.5 << std::endl;
                    f << i - 0.5 << " " << j + 0.5 << " " << k + 0.5 << std::endl;
                    f << i - 0.5 << " " << j - 0.5 << " " << k + 0.5 << std::endl;
                    f << i + 0.5 << " " << j - 0.5 << " " << k + 0.5 << std::endl;
                    f << i + 0.5 << " " << j + 0.5 << " " << k + 0.5 << std::endl;
                }
            }
        }
    }
    int contVOn=0;
    for (i = 0; i < nx; i++)
    {
        for (j = 0; j < ny; j++)
        {
            for (k = 0; k < nz; k++)
            {
                if (this->v[i][j][k].isOn)
                {
                    f << "4 " << contVOn*8+0 << " " << contVOn*8+3 << " " << contVOn*8+2 << " " << contVOn*8+1 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << this->v[i][j][k].b << this->v[i][j][k].a << std::endl;
                    f << "4 " << contVOn*8+4 << " " << contVOn*8+5 << " " << contVOn*8+6 << " " << contVOn*8+7 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << this->v[i][j][k].b << this->v[i][j][k].a << std::endl;
                    f << "4 " << contVOn*8+0 << " " << contVOn*8+1 << " " << contVOn*8+5 << " " << contVOn*8+4 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << this->v[i][j][k].b << this->v[i][j][k].a << std::endl;
                    f << "4 " << contVOn*8+0 << " " << contVOn*8+4 << " " << contVOn*8+7 << " " << contVOn*8+3 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << this->v[i][j][k].b << this->v[i][j][k].a << std::endl;
                    f << "4 " << contVOn*8+3 << " " << contVOn*8+7 << " " << contVOn*8+6 << " " << contVOn*8+2 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << this->v[i][j][k].b << this->v[i][j][k].a << std::endl;
                    f << "4 " << contVOn*8+1 << " " << contVOn*8+2 << " " << contVOn*8+6 << " " << contVOn*8+5 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << this->v[i][j][k].b << this->v[i][j][k].a << std::endl;
                    contVOn++;
                }
            }
        }
    }
    f.close();
}
