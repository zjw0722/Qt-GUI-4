#ifndef SETUP_H
#define SETUP_H

class QWizard;

class SetUp : public QWizard
{
public:
    SetUp(QWidget *parent = 0);
    void accept();
};

#endif // SETUP_H
