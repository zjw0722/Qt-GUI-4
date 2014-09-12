#ifndef ETLWIZARD_H
#define ETLWIZARD_H

#include <QMap>
#include <QWizard>
#include "common.h"

namespace Ui {
class EtlWizard;
}

class EtlWizard : public QWizard
{
    Q_OBJECT
    
public:
    explicit EtlWizard(QWidget *parent = 0);
    ~EtlWizard();
public slots:
    void onCurrentIdChanged(int Id);

private:
    Ui::EtlWizard *ui;
    QMap<PageId, QString> mapIdTitle;
};

#endif // ETLWIZARD_H
