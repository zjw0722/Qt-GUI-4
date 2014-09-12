#ifndef SECONDWIZARDPAGE_H
#define SECONDWIZARDPAGE_H

#include <QWizardPage>

namespace Ui {
class SecondWizardPage;
}

class SecondWizardPage : public QWizardPage
{
    Q_OBJECT
    
public:
    explicit SecondWizardPage(QWidget *parent = 0);
    ~SecondWizardPage();
    
public:
    int nextId() const;
    void initializePage();

private:
    Ui::SecondWizardPage *ui;
    QWidget *parent;
};

#endif // SECONDWIZARDPAGE_H
