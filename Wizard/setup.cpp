#include <QWizard>
#include "setup.h"

SetUp::SetUp(QWidget *parent)
    : QWizard(parent)
{
    //addPage(new LangPage);
    //addPage(new NetWorkPage);
    setWindowTitle(tr("SetUp Wizard"));
}

void SetUp::accept()
{
    QDialog::accept();
}
