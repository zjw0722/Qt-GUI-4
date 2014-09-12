#ifndef FIFTHDIALOG_H
#define FIFTHDIALOG_H

#include <QDialog>

namespace Ui {
class FifthDialog;
}

class FifthDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit FifthDialog(QWidget *parent = 0);
    ~FifthDialog();
    
private slots:
    void on_pushButtonNext_clicked();

    void on_pushButtonPre_clicked();

private:
    Ui::FifthDialog *ui;
};

#endif // FIFTHDIALOG_H
