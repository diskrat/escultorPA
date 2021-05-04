#ifndef COLORRGB_H
#define COLORRGB_H

#include <QWidget>

class colorRGB : public QWidget
{
    Q_OBJECT
private:
    int r=255,g=255,b=255,alpha=100;
public:
    explicit colorRGB(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);


public slots:
    void setR(int _R);
    void setG(int _G);
    void setB(int _B);
    void setAlpha(int _Alpha);
signals:

};

#endif // COLORRGB_H
