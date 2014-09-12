#include <windows.h>
#include <QApplication>
#include <QSplashScreen>
#include <QDialog>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/splash/kaola"));
    splash->show();

    Qt::Alignment topRight = Qt::AlignRight | Qt::AlignTop;
    splash->showMessage(QObject::tr("Setting up the main window..."),
                        topRight, Qt::white);
    ::Sleep(5000);
    QDialog *dialog = new QDialog;

    splash->showMessage(QObject::tr("Loading modules..."),
                        topRight, Qt::white);
    ::Sleep(5000);
    //
    splash->showMessage(QObject::tr("Establishing connections..."),
                        topRight, Qt::white);
    // 暂停3s
    ::Sleep(5000);

    dialog->show();
    splash->finish(dialog);
    delete splash;
    return app.exec();
}
