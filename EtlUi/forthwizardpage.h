#ifndef FORTHWIZARDPAGE_H
#define FORTHWIZARDPAGE_H

#include <QWizardPage>

namespace Ui {
class ForthWizardPage;
}

class ForthWizardPage : public QWizardPage
{
    Q_OBJECT
    
public:
    explicit ForthWizardPage(QWidget *parent = 0);
    ~ForthWizardPage();
    
public:
    int nextId() const;
    void initializePage();

private slots:
    void on_pushButtonFile_clicked();

private:
    Ui::ForthWizardPage *ui;
    QWidget *parent;
};

#endif // FORTHWIZARDPAGE_H
