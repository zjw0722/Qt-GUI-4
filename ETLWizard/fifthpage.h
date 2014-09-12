#ifndef FIFTHPAGE_H
#define FIFTHPAGE_H

#include "ui_fifthdialog.h"
#include <QWizardPage>

class FifthPage : public Ui::FifthDialog, public QWizardPage
{
public:
    FifthPage(QWidget *parent = 0);
};

#endif // FIFTHPAGE_H
