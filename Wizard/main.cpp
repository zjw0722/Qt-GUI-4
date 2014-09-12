#include <QApplication>
#include "setup.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    SetUp *pSetUp = new SetUp;

    return 0;
}
