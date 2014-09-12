#ifndef SEVENTHDIALOG_H
#define SEVENTHDIALOG_H

#include <QDialog>

namespace Ui {
class SeventhDialog;
}

class SeventhDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SeventhDialog(QWidget *parent = 0);
    ~SeventhDialog();
    
private:
    Ui::SeventhDialog *ui;
};

#endif // SEVENTHDIALOG_H
