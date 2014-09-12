#ifndef FIRSTPAGE_H
#define FIRSTPAGE_H

#include <QWizardPage>
#include "ui_firstdialog.h"

class FirstPage : public Ui::FirstDialog, public QWizardPage
{
public:
    FirstPage(QWidget *parent = 0);
};

#endif // FIRSTPAGE_H
