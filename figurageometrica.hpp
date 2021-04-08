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
    PutVoxel(int _x0 =0,int _y0 =0,int _z0 =0, float _r =0.0,float _g=0.0,float _b=0.0,float _a=1.0);
    ~PutVoxel();
    void draw(Sculptor &t);
};

#endif // FIGURAGEOMETRICA_HPP
