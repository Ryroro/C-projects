#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "student.h"
#include <QList>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QList<Student> studentList;
    QPushButton addStudentB;
private slots:

    void addStudent();/*
    void deleteStudent();
    void findStudent();
    void editStudent();
    void saveStudent();
    void editMode();
    void addMode();
*/
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
