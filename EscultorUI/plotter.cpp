#include "plotter.h"

#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QMouseEvent>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    Sculptor fig(getSizeX(),getSizeY(),getSizeZ());
    v = new Voxel **[sizeX];
    for (int i = 0; i < sizeX; i++)
    {
        v[i] = new Voxel *[sizeY];
        for (int j = 0; j < sizeY; j++)
        {
            v[i][j] = new Voxel[sizeZ];
            for (int k = 0; k < sizeZ; k++)
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



void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen  pen;
    brush.setColor(Qt::black);
    brush.setStyle(Qt::SolidPattern);


    pen.setColor(QColor(142,145,143));
    pen.setWidth(1);

    painter.setPen(pen);
    for(int i = 1; i < sizeX;i++)
    {
        int aux = i*width()/sizeX;
        painter.drawLine(aux,0,aux,height());
    }
    for(int i = 1; i < sizeY;i++)
    {
        int aux = i*height()/sizeY;
        painter.drawLine(0,aux,width(),aux);
    }
    painter.drawRect(0,0,width()-1,height()-1);
    if(mouseClick)
    {
        painter.setBrush(brush);
        painter.drawRect(mousePosX*width()/sizeX,(sizeY-1-mousePosY)*height()/sizeY,width()/sizeX,height()/sizeY);
        mouseClick=false;
    }
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    int auxX=event->x()*getSizeX()/width();
    int auxY=(getSizeY()-1)-event->y()*getSizeY()/height();
    emit signalMousePosX(auxX);
    emit signalMousePosY(auxY);
    mousePosX=auxX;
    mousePosY=auxY;
    mouseClick = true;
    repaint();
}



void Plotter::setSizeX(int _x)
{
   sizeX = _x;
}

void Plotter::setSizeY(int _y)
{
    sizeY= _y;
}

void Plotter::setSizeZ(int _z)
{
    sizeZ = _z;
}
