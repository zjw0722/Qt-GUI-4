#ifndef FIRSTWIZARDPAGE_H
#define FIRSTWIZARDPAGE_H

#include <QWizardPage>

namespace Ui {
class FirstWizardPage;
}

class FirstWizardPage : public QWizardPage
{
    Q_OBJECT
    
public:
    explicit FirstWizardPage(QWidget *parent = 0);
    ~FirstWizardPage();

public:
    int nextId() const;
    void initializePage();
    
private slots:
    void on_pushButtonFile_clicked();

private:
    Ui::FirstWizardPage *ui;
    QWidget *parent;
};

#endif // FIRSTWIZARDPAGE_H
