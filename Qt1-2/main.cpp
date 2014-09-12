/******************************************************************************
*
* Qt C++ GUI4 1-2
* Author:zjw
* Date:2014-07-15
*
* ****************************************************************************/
#include <QApplication>
#include <QPushButton>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QPushButton *button = new QPushButton("Quit");
    QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));

    button->show();
    return app.exec();
}
