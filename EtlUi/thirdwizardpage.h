#ifndef THIRDWIZARDPAGE_H
#define THIRDWIZARDPAGE_H

#include <QWizardPage>
#include <QMap>
#include "connection.h"

namespace Ui {
class ThirdWizardPage;
}

class ThirdWizardPage : public QWizardPage
{
    Q_OBJECT
    
public:
    explicit ThirdWizardPage(QWidget *parent = 0);
    ~ThirdWizardPage();
    
public:
    int nextId();
    void initializePage();

private:
    void ReadConnection();
    void WriteConnection();

private:
    Ui::ThirdWizardPage *ui;
    QWidget *parent;
    QMap<int, Connection> m_mapConnections;
};

#endif // THIRDWIZARDPAGE_H
