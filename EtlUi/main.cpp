#include <QApplication>
#include "etlwizard.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    EtlWizard *pWizard = new EtlWizard;
    pWizard->show();
    return app.exec();
}
