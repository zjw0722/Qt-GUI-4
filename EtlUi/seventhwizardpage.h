#ifndef SEVENTHWIZARDPAGE_H
#define SEVENTHWIZARDPAGE_H

#include <QWizardPage>

namespace Ui {
class SeventhWizardPage;
}

class SeventhWizardPage : public QWizardPage
{
    Q_OBJECT
    
public:
    explicit SeventhWizardPage(QWidget *parent = 0);
    ~SeventhWizardPage();

public:
    int nextId() const;
    void initializePage();

private:
    Ui::SeventhWizardPage *ui;
    QWidget *parent;
};

#endif // SEVENTHWIZARDPAGE_H
