#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include "mainescultor.h"
#include "sculptor.hpp"

class Plotter : public QWidget
{
    Q_OBJECT
protected:
    int mousePosX,mousePosY,sizeX,sizeY,sizeZ;
    bool mouseClick=false;
    Voxel ***v;
    Sculptor fig;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void setSizeX(int _x);
    void setSizeY(int _y);
    void setSizeZ(int _z);
    inline int getSizeX() {return sizeX;};
    inline int getSizeY() {return sizeY;};
    inline int getSizeZ() {return sizeZ;};
public slots:
signals:
    void signalMousePosX(int);
    void signalMousePosY(int);
};

#endif // PLOTTER_H
