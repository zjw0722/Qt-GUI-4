#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class Spreadsheet;
class GoToCellDialog;
class SortDialog;
class FindDialog;
class QLabel;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();
    //explicit MainWindow(QWidget *parent = 0);
protected:
    void closeEvent(QCloseEvent *);
private slots:
    void newFile();
    void open();
    bool save();
    bool saveAs();
    void find();
    void goToCell();
    void sort();
    void about();
    void openRecentFile();
    void updateStatusBar();
    void spreadsheetModified();
private:
    void createActions();
    void createMenus();
    void createContextMenus();
    void createToolBars();
    void createStatusBar();
    void readSettings();
    void writeSettings();
    bool okToContinue();
    bool loadFile(const QString &fileName);
    bool saveFile(const QString &fileName);
    void setCurrentFile(const QString &fileName);
    void updateRecentFileActions();
    QString strippedName(const QString &fullFileName);

private:
    Spreadsheet *spreadsheet;
    FindDialog *findDialog;
    QLabel *locationLabel;
    QLabel *formulaLabel;
    QStringList recentFiles;
    QString curFile;

    enum {MaxRecentFiles = 5};
    QAction *recentFileAction[MaxRecentFiles];
    QAction *separatorAction;

    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *selectSubMenu;
    QMenu *toolsMenu;
    QMenu *optionMenu;
    QMenu *helpMenu;


    QToolBar *fileToolBar;
    QToolBar *editToolBar;

    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *cutAction;
    QAction *copyAction;
    QAction *pasteAction;

    QAction *findAction;
    QAction *aboutAction;
    QAction *aboutQtAction;
    QAction *closeAction;
    QAction *exitAction;
    QAction *selectAction;
    QAction *showGridAction;
    QAction *deleteAction;
    QAction *goToCellAction;
    QAction *selectRowAction;
    QAction *selectColumnAction;
    QAction *selectAllAction;

    QAction *recalculateAction;
    QAction *sortAction;
    QAction *autoRecalcAction;

    QAction *recentFileActions[10];
};

#endif // MAINWINDOW_H
