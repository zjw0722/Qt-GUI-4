#include <QApplication>
#include <QWizard>
#include "etlwizard.h"
#include "firstpage.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    EtlWizard EtlWizard;
    //FirstPage *page = new FirstPage;
    //page->show();

    return app.exec();
}
