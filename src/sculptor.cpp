#include <cstdlib>
#include <iostream>
#include "sculptor.hpp"
#include <vector>
#include <fstream>
#include <cmath>
Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    this->nx = _nx;
    this->ny = _ny;
    this->nz = _nz;
    this->r = 0.0;
    this->g = 0.0;
    this->b = 0.0;
    this->a = 0.0;
    v = new Voxel **[_nx];
    for (int i = 0; i < _nx; i++)
    {
        v[i] = new Voxel *[_ny];
        for (int j = 0; j < _ny; j++)
        {
            v[i][j] = new Voxel[_nz];
            for (int k = 0; k < _nz; k++)
            {
                this->v[i][j][k].r = 0.0;
                this->v[i][j][k].g = 0.0;
                this->v[i][j][k].b = 0.0;
                this->v[i][j][k].a = 0.0;
                this->v[i][j][k].isOn = false;
            }
        }
    }
}

Sculptor::~Sculptor()
{
    for (int i = 0; i < nx; i++)
    {

        for (int j = 0; j < ny; j++)
        {
            delete[] v[i][j];
        }
        delete[] v[i];
    }
    delete[] v;
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
    x0 = (x0 < 0) ? 0 :x0;
    x1 = (x1 > this->nx) ? this->nx : x1;
    y0 = (y0 < 0) ? 0 :y0;
    y1 = (y1 > this->ny) ? this->ny : y1;
    z0 = (z0 < 0) ? 0 :z0;
    z1 = (z1 > this->nz) ? this->nz : z1;

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
    x0 = (x0 < 0) ? 0 :x0;
    x1 = (x1 > this->nx) ? this->nx : x1;
    y0 = (y0 < 0) ? 0 :y0;
    y1 = (y1 > this->ny) ? this->ny : y1;
    z0 = (z0 < 0) ? 0 :z0;
    z1 = (z1 > this->nz) ? this->nz : z1;

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
    putEllipsoid(xcenter, ycenter, zcenter, radius, radius, radius);
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    cutEllipsoid(xcenter, ycenter, zcenter, radius, radius, radius);
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    int x0, x1, y0, y1, z0, z1;

    x0 = (xcenter - rx < 0) ? 0 : xcenter - rx;
    x1 = (xcenter + rx > this->nx) ? this->nx : xcenter + rx;
    y0 = (ycenter - ry < 0) ? 0 : ycenter - ry;
    y1 = (ycenter + ry > this->ny) ? this->ny : ycenter + ry;
    z0 = (zcenter - rz < 0) ? 0 : zcenter - rz;
    z1 = (zcenter + rz > this->nz) ? this->nz : zcenter + rz;


    for (int i = x0; i < x1; i++)
    {
        for (int j = y0; j < y1; j++)
        {
            for (int k = z0; k < z1; k++)
            {
                if ((pow(i - xcenter, 2) / pow(rx, 2) + pow(j - ycenter, 2) / pow(ry, 2) + pow(k - zcenter, 2) / pow(rz, 2)) < 1)
                {
                    this->putVoxel(i, j, k);
                }
            }
        }
    }
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    int x0, x1, y0, y1, z0, z1;

    x0 = (xcenter - rx < 0) ? 0 : xcenter - rx;
    x1 = (xcenter + rx > this->nx) ? this->nx : xcenter + rx;
    y0 = (ycenter - ry < 0) ? 0 : ycenter - ry;
    y1 = (ycenter + ry > this->ny) ? this->ny : ycenter + ry;
    z0 = (zcenter - rz < 0) ? 0 : zcenter - rz;
    z1 = (zcenter + rz > this->nz) ? this->nz : zcenter + rz;


    for (int i = x0; i < x1; i++)
    {
        for (int j = y0; j < y1; j++)
        {
            for (int k = z0; k < z1; k++)
            {
                if ((pow(i - xcenter, 2) / pow(rx, 2) + pow(j - ycenter, 2) / pow(ry, 2) + pow(k - zcenter, 2) / pow(rz, 2)) < 1)
                {
                    this->cutVoxel(i, j, k);
                }
            }
        }
    }
}

void Sculptor::writeOFF(char *filename)
{
    std::ofstream myFile(filename);
    //uso de stream
    if (!myFile.is_open())
    {
        std::cout << "file not open" << std::endl;
        exit(1);
    }
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

    myFile << "OFF" << std::endl;
    myFile << 8 * vOn << " " << 6 * vOn << " 0" << std::endl;

    for (i = 0; i < nx; i++)
    {
        for (j = 0; j < ny; j++)
        {
            for (k = 0; k < nz; k++)
            {
                if (this->v[i][j][k].isOn)
                {
                    // mais stream
                    myFile << i - 0.5 << " " << j + 0.5 << " " << k - 0.5 << std::endl;
                    myFile << i - 0.5 << " " << j - 0.5 << " " << k - 0.5 << std::endl;
                    myFile << i + 0.5 << " " << j - 0.5 << " " << k - 0.5 << std::endl;
                    myFile << i + 0.5 << " " << j + 0.5 << " " << k - 0.5 << std::endl;
                    myFile << i - 0.5 << " " << j + 0.5 << " " << k + 0.5 << std::endl;
                    myFile << i - 0.5 << " " << j - 0.5 << " " << k + 0.5 << std::endl;
                    myFile << i + 0.5 << " " << j - 0.5 << " " << k + 0.5 << std::endl;
                    myFile << i + 0.5 << " " << j + 0.5 << " " << k + 0.5 << std::endl;
                }
            }
        }
    }
    int contVOn = 0;
    for (i = 0; i < nx; i++)
    {
        for (j = 0; j < ny; j++)
        {
            for (k = 0; k < nz; k++)
            {
                if (this->v[i][j][k].isOn)
                {
                    myFile << "4 " << contVOn * 8 + 0 << " " << contVOn * 8 + 3 << " " << contVOn * 8 + 2 << " " << contVOn * 8 + 1 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << " " << this->v[i][j][k].b << " " << this->v[i][j][k].a << std::endl;
                    myFile << "4 " << contVOn * 8 + 4 << " " << contVOn * 8 + 5 << " " << contVOn * 8 + 6 << " " << contVOn * 8 + 7 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << " " << this->v[i][j][k].b << " " << this->v[i][j][k].a << std::endl;
                    myFile << "4 " << contVOn * 8 + 0 << " " << contVOn * 8 + 1 << " " << contVOn * 8 + 5 << " " << contVOn * 8 + 4 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << " " << this->v[i][j][k].b << " " << this->v[i][j][k].a << std::endl;
                    myFile << "4 " << contVOn * 8 + 0 << " " << contVOn * 8 + 4 << " " << contVOn * 8 + 7 << " " << contVOn * 8 + 3 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << " " << this->v[i][j][k].b << " " << this->v[i][j][k].a << std::endl;
                    myFile << "4 " << contVOn * 8 + 3 << " " << contVOn * 8 + 7 << " " << contVOn * 8 + 6 << " " << contVOn * 8 + 2 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << " " << this->v[i][j][k].b << " " << this->v[i][j][k].a << std::endl;
                    myFile << "4 " << contVOn * 8 + 1 << " " << contVOn * 8 + 2 << " " << contVOn * 8 + 6 << " " << contVOn * 8 + 5 << " " << this->v[i][j][k].r << " " << this->v[i][j][k].g << " " << this->v[i][j][k].b << " " << this->v[i][j][k].a << std::endl;
                    contVOn++;
                }
            }
        }
    }
    myFile.close();
}
