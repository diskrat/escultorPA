#ifndef FIGURAGEOMETRICA_HPP
#define FIGURAGEOMETRICA_HPP
#include "sculptor.hpp"

class figuraGeometrica
{
protected:
    int x0, y0, z0;
    float r, g, b, a;

public:
    virtual ~figuraGeometrica();
    virtual void draw(Sculptor &t);
};

class PutVoxel : public figuraGeometrica
{

public:
    PutVoxel(int _x0 ,int _y0 ,int _z0 , float _r,float _g,float _b,float _a);
    ~PutVoxel();
    void draw(Sculptor &t);
};

#endif // FIGURAGEOMETRICA_HPP
