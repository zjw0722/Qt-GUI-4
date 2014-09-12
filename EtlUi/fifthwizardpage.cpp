#include <QFileDialog>
#include <QMessageBox>
#include "common.h"
#include "fifthwizardpage.h"
#include "ui_fifthwizardpage.h"

FifthWizardPage::FifthWizardPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::FifthWizardPage),
    parent(parent)
{
    ui->setupUi(this);
    m_mapConnections.clear();
}


FifthWizardPage::~FifthWizardPage()
{
    delete ui;
}

// 实现nextId
int FifthWizardPage::nextId()
{
    // 根据用户选项决定下一页
    return SIXTHPAGE;
    WriteConnection();
}

// 初始化
void FifthWizardPage::initializePage()
{
    ReadConnection();
}

// 测试连接是否可用
void FifthWizardPage::on_pushButtonTest_clicked()
{
    // 调用下层函数测试连接
}

// 组合的选项更改
void FifthWizardPage::on_comboBox_currentIndexChanged(int index)
{
    // 将对应的保存的连接参数填入编辑框中
    int i = index;
    i++;
}

// 读取连接信息
void FifthWizardPage::ReadConnection()
{
    QFile file("scsdb.passwd");
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this, tr("打开文件失败"),
                                 tr("错误原因：%1").arg(file.errorString()));
        return;
    }
    QDataStream in(&file);
    Connection con;
    int i = 0;
    while(!in.atEnd())
    {
        in >> con;
        ui->comboBox->insertItem(i, con.strDatabase);
        m_mapConnections.insert(i, con);
    }
    file.close();
}

// 写入连接信息
void FifthWizardPage::WriteConnection()
{
    QFile file("scsdb.passwd");
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::information(this, tr("打开文件失败"),
                                 tr("错误原因：%1").arg(file.errorString()));
        return;
    }
    QDataStream out(&file);

    for(int i = 0;i < m_mapConnections.size();++i)
    {
        out << m_mapConnections[i];
    }
    file.close();
}
