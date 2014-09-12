#include <QApplication>
#include "hexspinbox.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    HexSpinBox *hexBox = new HexSpinBox;
    hexBox->setRange(0, 100);
    hexBox->show();

    return app.exec();
}
