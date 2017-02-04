#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include <QList>
#include "studententry.h"

class student : public QObject
{
    Q_OBJECT
public:
    typedef QList<studentEntry*> Entries;
    explicit student(QObject *parent = 0);

    Entries getEntries() const;
    studentEntry * createEntry();
    bool deleteEntry( studentEntry * entry);

signals:

    void entryAdded( studentEntry * entry);
    void entryRemoved( studentEntry * entry);

public slots:
private:
    Entries entries;
};

#endif // STUDENT_H
