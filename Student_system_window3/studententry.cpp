#include "studententry.h"

studentEntry::studentEntry(QObject *parent) : QObject(parent)
{


}

QString studentEntry::getName() const
{
    return name;
}

void studentEntry::setName(const QString &value)
{
    if (name!=value)
    {
    name = value;
    emit nameChanged();
    }
}

int studentEntry::getAge() const
{
    return age;
}

void studentEntry::setAge(int value)
{
    if (age != value)
    {
    age = value;
    emit ageChanged();
    }
}




QString studentEntry::getSex() const
{
    return sex;
}

void studentEntry::setSex(const QString &value)
{
    if (sex != value) {
        sex = value;
        emit sexChanged();
    }
}

QVector<QString> studentEntry::getSubjectChoice() const
{
    return subjectChoice;
}

void studentEntry::setSubjectChoice(const QVector<QString> &value)
{
    subjectChoice = value;
}

QDate studentEntry::getBirthday() const
{
    return birthday;
}

void studentEntry::setBirthday(const QDate &value)
{
    if (birthday != value) {
    birthday = value;
    emit birthdayChanged();
    }
}

QVector<QString> studentEntry::getSubjectLevel() const
{
    return subjectLevel;
}

void studentEntry::setSubjectLevel(const QVector<QString> &value)
{
    if (subjectLevel != value) {
    subjectLevel = value;
    emit subjectLevelChanged();
    }
}

QString studentEntry::getClassGrade() const
{
    return classGrade;
}

void studentEntry::setClassGrade(const QString &value)
{
    if (classGrade != value) {
    classGrade = value;
    emit classGradeChanged();
    }
}

QString studentEntry::getClassRoom() const
{
    return classRoom;
}

void studentEntry::setClassRoom(const QString &value)
{
    if (classRoom != value) {
    classRoom = value;
    emit classRoomChanged();
    }
}
studentEntry::~studentEntry()
{

}

