#ifndef SECONDPAGE_H
#define SECONDPAGE_H

#include "ui_seconddialog.h"
#include "QWizardPage"

class SecondPage : public Ui::SecondDialog, public QWizardPage
{
public:
    SecondPage(QWidget *parent = 0);
};

#endif // SECONDPAGE_H
