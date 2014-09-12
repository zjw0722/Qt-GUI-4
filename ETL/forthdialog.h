#ifndef FORTHDIALOG_H
#define FORTHDIALOG_H

#include <QDialog>

namespace Ui {
class ForthDialog;
}

class ForthDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ForthDialog(QWidget *parent = 0);
    ~ForthDialog();
    
private slots:
    void on_pushButtonNext_clicked();

    void on_pushButtonPre_clicked();

private:
    Ui::ForthDialog *ui;
};

#endif // FORTHDIALOG_H
