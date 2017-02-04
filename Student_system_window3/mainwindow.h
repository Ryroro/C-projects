#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "studentcontroller.h"
#include <QHash>
namespace Ui {
class MainWindow;
}
class QListWidgetItem;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(studentController *m_studentcontroller, QWidget *parent = 0);
    ~MainWindow();
public slots:
    void createEntry();
    void deleteEntry();
    void editEntry();
    void saveEntry();
    void discardEntry();
    void resetEntry();
    void doubleClickedEditEntry();

private:
    Ui::MainWindow *ui;
    studentController *m_studentcontroller;
    QHash<QListWidgetItem*,studentEntry*> m_entryMap;
    void setupConnections();
};

#endif // MAINWINDOW_H
