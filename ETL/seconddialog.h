#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>

namespace Ui {
class SecondDialog;
}

class SecondDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SecondDialog(QWidget *parent = 0);
    ~SecondDialog();
    
private slots:
    void on_pushButtonNext_clicked();

    void on_pushButtonPre_clicked();

private:
    Ui::SecondDialog *ui;
};

#endif // SECONDDIALOG_H
