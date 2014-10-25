#include "cubeview.h"

CubeView::CubeView(QWidget *parent) :
    QWidget(parent)
    {
        magiccube = new Cube();
        magiccube->rotate("R");
        magiccube->rotate("U2");
        magiccube->rotate("F\'");
        magiccube->rotate("l");
        magiccube->rotate("M2");
        magiccube->rotate("b");
        magiccube->rotate("x");
        magiccube->rotate("y2");
        magiccube->rotate("S2");

        this->init();
    }

void CubeView::paintEvent(QPaintEvent *event)
    {
        for (int i = 0; i < 6; i++)
            this->drawsurface(i);
    }

void CubeView::resizeEvent(QResizeEvent *event)
    {
        this->init();
    }

void CubeView::init()
    {
        this->mm = 10;
        int w = this->width();
        int h = this->height();
        if (4 * h - 3 * w - 2 * mm > 0)
            {
                ww = w;
                hh = (3 * ww - 2 * mm) / 4;
                aa = (hh - 2 * mm) / 3;
                ll = (aa - 8) / 3;
            }
        else
            {
                hh = h;
                ww = (4 * hh - 2 * mm) / 3;
                aa = (hh - 2 * mm) / 3;
                ll = (aa - 12) / 3;
            }
    }

void CubeView::drawsurface(int surface)
    {
        switch (surface)
            {
            case 0: {ss = 0; x0 = mm; y0 = mm + aa;} break;
            case 1: {ss = 1; x0 = mm + aa; y0 = mm + aa;} break;
            case 2: {ss = 2; x0 = mm + 2 * aa; y0 = mm + aa;} break;
            case 3: {ss = 3; x0 = mm + 3 * aa; y0 = mm + aa;} break;
            case 4: {ss = 4; x0 = mm + aa; y0 = mm;} break;
            case 5: {ss = 5; x0 = mm + aa; y0 = mm + 2 * aa;} break;
            }

        QPainter painter (this);
        painter.setRenderHint (QPainter::Antialiasing);
        QPen pen;
        QBrush brush(QColor(0,255,0,125));
        pen.setWidth (1);
        pen.setStyle (Qt::SolidLine);
        pen.setCapStyle (Qt::RoundCap);
        pen.setJoinStyle (Qt::RoundJoin);
        pen.setColor (Qt::black);
        painter.setPen(pen);
        painter.setBrush(brush);
        //painter.drawRoundRect(x0, y0, aa, aa, 5, 5);

        QBrush brush0(QColor(255,255,128,255));
        QBrush brush1(QColor(255,0,0,255));
        QBrush brush2(QColor(255,255,255,255));
        QBrush brush3(QColor(255,128,0,255));
        QBrush brush4(QColor(0,255,0,255));
        QBrush brush5(QColor(0,0,255,255));

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                {
                    int cc = 3 * i + j;
                    char temp = magiccube->cube[ss][cc];
                    if (temp == 'Y')
                        painter.setBrush(brush0);
                    else if (temp == 'R')
                        painter.setBrush(brush1);
                    else if (temp == 'W')
                        painter.setBrush(brush2);
                    else if (temp == 'O')
                        painter.setBrush(brush3);
                    else if (temp == 'G')
                        painter.setBrush(brush4);
                    else if (temp == 'B')
                        painter.setBrush(brush5);

                    painter.drawRoundRect(x0 + (j + 1) * 3 + j * ll, y0 + (i + 1) * 3 + i * ll, ll, ll, 5, 5);
                }

    }
