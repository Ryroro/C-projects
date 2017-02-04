#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

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

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = 0);
    QString name;
    Birthday birthday;
    int age;
    QList<Subject> subjectChoice;
    Sex sex;

signals:

public slots:
};

#endif // STUDENT_H
