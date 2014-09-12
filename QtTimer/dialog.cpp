#include <QTimer>
#include <QTime>
#include <QHBoxLayout>
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QTimer *pTimer = new QTimer(this);
    connect(pTimer, SIGNAL(timeout()), this, SLOT(UpdateTime()));
    pTimer->start(1000);

    QHBoxLayout *hLayout = new QHBoxLayout(this);
    hLayout->addWidget(ui->lcdNumber);

    setFixedSize(this->width(), this->height());

    UpdateTime();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::UpdateTime()
{
    static bool bFlag = true;
    QTime time = QTime::currentTime();
    QString strTime = time.toString("hh:mm:ss");

    if(bFlag)
    {
        //strTime[5] = ' ';
    }
    bFlag = !bFlag;
    ui->lcdNumber->display(strTime);
}
