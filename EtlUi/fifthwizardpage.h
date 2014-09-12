#ifndef FIFTHWIZARDPAGE_H
#define FIFTHWIZARDPAGE_H
#include <QMap>
#include <QWizardPage>
#include "connection.h"

namespace Ui {
class FifthWizardPage;
}

class FifthWizardPage : public QWizardPage
{
    Q_OBJECT
    
public:
    explicit FifthWizardPage(QWidget *parent = 0);
    ~FifthWizardPage();

public:
    int nextId();
    void initializePage();

private slots:
    void on_pushButtonTest_clicked();
    void on_comboBox_currentIndexChanged(int index);

private:
    void ReadConnection();
    void WriteConnection();

private:
    Ui::FifthWizardPage *ui;
    QWidget *parent;
    QMap<int, Connection> m_mapConnections;
};

#endif // FIFTHWIZARDPAGE_H
