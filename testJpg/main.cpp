#include <QApplication>
#include <QFrame>
#include <QtGui>
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QFrame *frame = new QFrame;
    // frame->resize(400,700);
    QPixmap pixmap(":/kaola/me");
    int height = pixmap.size().height();
    int width = pixmap.size().width();
    frame->resize(width, height);
    QPalette   palette;
    palette.setBrush(frame->backgroundRole(),QBrush(pixmap));
    frame->setPalette(palette);
    frame->setMask(pixmap.mask());
    //可以将图片中透明部分显示为透明的
    frame->setAutoFillBackground(true);
    frame->show();
    return app.exec();
}
