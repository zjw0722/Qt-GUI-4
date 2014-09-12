#ifndef THIRDPAGE_H
#define THIRDPAGE_H

#include "ui_thirddialog.h"
#include <QWizardPage>

class ThirdPage : public Ui::ThirdDialog, public QWizardPage
{
public:
    ThirdPage(QWidget *parent = 0);
};

#endif // THIRDPAGE_H
