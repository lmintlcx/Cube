#include <QtGui/QApplication>
#include <QTextCodec>
#include <QDesktopWidget>
#include <QFont>
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QFont font("Microsoft YaHei", 24, QFont::Normal, false);
    app.setFont (font);

    QTextCodec *codec=QTextCodec::codecForName("GB18030");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);

    Widget w;
    QDesktopWidget* desktop = QApplication::desktop();
    int width = desktop->width();
    int height = desktop->height();
    w.resize(800, 600);
    w.move((width - w.width())/2, (height - w.height())/3);
    w.show();

    return app.exec();
}
