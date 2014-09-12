#ifndef SIXTHDIALOG_H
#define SIXTHDIALOG_H

#include <QDialog>

namespace Ui {
class SixthDialog;
}

class SixthDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SixthDialog(QWidget *parent = 0);
    ~SixthDialog();
    
private:
    Ui::SixthDialog *ui;
};

#endif // SIXTHDIALOG_H
