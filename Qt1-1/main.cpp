/******************************************************************************
*
* Qt C++ GUI4 1-1
* Author:zjw
* Date:2014-07-15
*
* ****************************************************************************/
#include <QApplication>
#include <QLabel>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    //QLabel *label = new QLabel("Hello Qt");
    QLabel *label = new QLabel("<h2><i>Hello </i><font color=red>Qt</font></h2>");
    label->show();
    return app.exec();
}
