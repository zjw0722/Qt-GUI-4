#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>
#include "ui_gotocelldialog.h"

class GotoCellDialog : public QDialog, public Ui::GoToCellDialog
{
    Q_OBJECT
public:
    GotoCellDialog(QWidget *parent = 0);
private slots:
    void on_lineEdit_textChanged();
};

#endif // GOTOCELLDIALOG_H
