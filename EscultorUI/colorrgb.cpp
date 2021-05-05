#include "colorrgb.h"
#include "mainescultor.h"
#include "plotter.h"
#include<QPainter>
#include <QBrush>

colorRGB::colorRGB(QWidget *parent) : QWidget(parent)
{

}

void colorRGB::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;

    brush.setColor(QColor(r,g,b));
    brush.setStyle(Qt::SolidPattern);

    painter.setBrush(brush);
    painter.setOpacity(qreal(alpha/100.0));
    painter.drawRect(0,0,width(),height());
    //Plotter::fig->setColor(r/255.0,g/255.0,b/255.0,alpha/100.0);


}

void colorRGB::setR(int _R)
{
    r = _R;
    repaint();
}
void colorRGB::setG(int _G)
{
    g = _G;
    repaint();
}
void colorRGB::setB(int _B)
{
    b = _B;
    repaint();
}

void colorRGB::setAlpha(int _Alpha)
{
    alpha=_Alpha;
    repaint();
}

