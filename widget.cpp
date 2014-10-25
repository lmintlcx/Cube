#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    cubeview = new CubeView(this);

    mainlayout = new QGridLayout();

    mainlayout->addWidget(cubeview, 1, 1, 1, 1);
    mainlayout->setMargin(10);
    mainlayout->setSpacing(10);

    this->setLayout(mainlayout);
}

Widget::~Widget()
{
}
