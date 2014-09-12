#ifndef SIXTHWIZARDPAGE_H
#define SIXTHWIZARDPAGE_H

#include <QWizardPage>

namespace Ui {
class SixthWizardPage;
}

class SixthWizardPage : public QWizardPage
{
    Q_OBJECT
    
public:
    explicit SixthWizardPage(QWidget *parent = 0);
    ~SixthWizardPage();
    
public:
    int nextId() const;
    void initializePage();

private:
    Ui::SixthWizardPage *ui;
    QWidget *parent;
};

#endif // SIXTHWIZARDPAGE_H
