#ifndef STUDENTEDIT_H
#define STUDENTEDIT_H

#include <QObject>
#include <QWidget>
#include <QComboBox>
#include <QRadioButton>
#include <QPushButton>




class studentEdit : public QWidget
{
    Q_OBJECT

public:
    explicit studentEdit(QWidget *parent = 0);
    ~studentEdit();

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


};
#endif // STUDENTEDIT_H
