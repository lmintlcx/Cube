#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui/QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLayout>
#include "cubeview.h"

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    Widget(QWidget *parent = 0);
    ~Widget();

public:
    CubeView *cubeview;
    QGridLayout *mainlayout;
};

#endif // WIDGET_H
