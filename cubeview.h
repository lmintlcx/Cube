#ifndef CUBEVIEW_H
#define CUBEVIEW_H

#include <QWidget>
#include <QPainter>
#include "cube.h"

class CubeView : public QWidget
{
    Q_OBJECT

public:
    explicit CubeView(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);
    void init();
    void drawsurface(int surface);

public:
    Cube *magiccube;
    int w, h;
    int ww, hh;
    int aa, ll;
    int mm;
    int x0, y0, ss;
    
signals:
    
public slots:
    
};

#endif // CUBEVIEW_H
