#ifndef STUDENTCONTROLLER_H
#define STUDENTCONTROLLER_H

#include <QObject>
#include "studententry.h"
#include "student.h"

class studentController : public QObject
{
    Q_OBJECT
public:
    explicit studentController(student *m_student, QObject *parent = 0);
    studentEntry *createEntry();
    bool deleteEntry(studentEntry * entry);
signals:

public slots:
private:
    student *m_student;

};

#endif // STUDENTCONTROLLER_H
