#ifndef FORTHPAGE_H
#define FORTHPAGE_H

#include "ui_forthdialog.h"
#include <QWizardPage>

class ForthPage : public Ui::ForthDialog, public QWizardPage
{
public:
    ForthPage(QWidget *parent = 0);
};

#endif // FORTHPAGE_H
