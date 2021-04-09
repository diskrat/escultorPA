#ifndef FIGURAGEOMETRICA_HPP
#define FIGURAGEOMETRICA_HPP
#include "sculptor.hpp"

class FiguraGeometrica
{
protected:
    int x0, y0, z0;

public:
    virtual void draw(Sculptor &t);
};

class PutVoxel : public FiguraGeometrica
{
protected:
    float r, g, b, a;

public:
    PutVoxel(int _x0 = 0, int _y0 = 0, int _z0 = 0, float _r = 0.0, float _g = 0.0, float _b = 0.0, float _a = 1.0);
    inline ~PutVoxel(){};
    void draw(Sculptor &t);
};

class CutVoxel : public FiguraGeometrica
{
public:
    CutVoxel(int _x0 = 0, int _y0 = 0, int _z0 = 0);
    inline ~CutVoxel(){};
    void draw(Sculptor &t);
};

class PutBox : public FiguraGeometrica
{
protected:
    int x1, y1, z1;
    float r, g, b, a;

public:
    PutBox(int _x0 = 0, int _x1 = 0, int _y0 = 0, int _y1 = 0, int _z0 = 0, int _z1 = 0, float _r = 0.0, float _g = 0.0, float _b = 0.0, float _a = 1.0);
    inline ~PutBox(){};
    void draw(Sculptor &t);
};

class CutBox : public FiguraGeometrica
{
protected:
    int x1, y1, z1;

public:
    CutBox(int _x0 = 0, int _x1 = 0, int _y0 = 0, int _y1 = 0, int _z0 = 0, int _z1 = 0);
    inline ~CutBox(){};
    void draw(Sculptor &t);
};

class PutSphere : public FiguraGeometrica
{
protected:
    int radius;
    float r, g, b, a;

public:
    PutSphere(int _x0 = 0, int _y0 = 0, int _z0 = 0, int _radius = 1, float _r = 0.0, float _g = 0.0, float _b = 0.0, float _a = 1.0);
    inline ~PutSphere() {}
    void draw(Sculptor &t);
};

class CutSphere : public FiguraGeometrica
{
protected:
    int radius;
public:
    CutSphere(int _x0 = 0, int _y0 = 0, int _z0 = 0, int _radius = 1);
    inline ~CutSphere() {}
    void draw(Sculptor &t);
};

class PutEllipsoid : public FiguraGeometrica
{
protected:
    int rx,ry,rz;
    float r, g, b, a;

public:
    PutEllipsoid(int _x0 = 0, int _y0 = 0, int _z0 = 0, int _rx =0, int _ry =0, int _rz =0, float _r = 0.0, float _g = 0.0, float _b = 0.0, float _a = 1.0);
    inline ~PutEllipsoid() {}
    void draw(Sculptor &t);
};

class CutEllipsoid : public FiguraGeometrica
{
protected:
    int rx,ry,rz;
public:
    CutEllipsoid(int _x0 = 0, int _y0 = 0, int _z0 = 0, int _rx =0, int _ry =0, int _rz =0);
    inline ~CutEllipsoid() {}
    void draw(Sculptor &t);
};

#endif // FIGURAGEOMETRICA_HPP