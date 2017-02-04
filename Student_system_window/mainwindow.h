#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QWidget>
#include <QList>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QComboBox>
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
};


struct Birthday {
    int year;
    int month;
    int day;
};

struct classes {
    QString grade;
    QString room;
};

struct Subject {
    QString subjectName;
    QString subjectLevel;

};
struct Sex {
    QString M;
    QString F;
};
class Student: public QObject
{
    Q_OBJECT;
public:
    QString name;
    Birthday birthday;
    int age;
    QList<Subject> subjectChoice;
    Sex sex;
};

class Student_system_widget : public QWidget
{
    Q_OBJECT

public:
    explicit Student_system_widget(QWidget *parent = 0);
    ~Student_system_widget();

private:
    QLineEdit *nameLine;
    QLineEdit *ageLine;
    QLineEdit *sexLine;
    QLineEdit *subjectLine;
    QLineEdit *classLine;
    QLineEdit *birthLine;
    QRadioButton *sexButtonM;
    QRadioButton *sexButtonF;
    QComboBox *year;
    QComboBox *month;
    QComboBox *day;
    QComboBox *grade;
    QComboBox *room;
    QComboBox *Level1;
    QComboBox *Level2;
    QComboBox *Level3;
    QComboBox *Level4;
    QComboBox *Level5;
    QComboBox *Level6;
    QComboBox *Csubject1;
    QComboBox *Csubject2;
    QComboBox *Csubject3;
    QPushButton *addButton;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QList<Student> studentList;
};



#endif // MAINWINDOW_H
