#ifndef STUDENTENTRY_H
#define STUDENTENTRY_H
#include <QObject>
#include <QString>
#include <QList>
#include <QVector>
#include <QDate>

class studentEntry :public QObject
{
    Q_OBJECT/*
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged);
    Q_PROPERTY(QString birthday READ birthday WRITE setBirthday NOTIFY birthdayChanged());
    Q_PROPERTY(QString age READ age WRITE setAge NOTIFY ageChanged);
    Q_PROPERTY(QString subejctChoice READ subjectChoice WRITE setSubjectChoice NOTIFY subjectChoiceChanged);
    Q_PROPERTY(QString sex READ sex WRITE setSex NOTIFY sexChanged);
    */
public:
    explicit studentEntry(QObject *parent = 0);
    ~studentEntry();


    QString getName() const;
    void setName(const QString &value);

    int getAge() const;
    void setAge(int value);

    QString getSex() const;
    void setSex(const QString &value);

    QVector<QString> getSubjectChoice() const;
    void setSubjectChoice(const QVector<QString> &value);

    QDate getBirthday() const;
    void setBirthday(const QDate &value);

    QVector<QString> getSubjectLevel() const;
    void setSubjectLevel(const QVector<QString> &value);

    QString getClassGrade() const;
    void setClassGrade(const QString &value);

    QString getClassRoom() const;
    void setClassRoom(const QString &value);

signals:
    void nameChanged();
    void birthdayChanged();
    void ageChanged();
    void classGradeChanged();
    void classRoomChanged();
    void subjectChoiceChanged();
    void subjectLevelChanged();
    void sexChanged();
    void classesChanged();

private:
    QString name;
    QDate birthday;
    int age;
    QVector<QString> subjectChoice{6};
    QVector<QString> subjectLevel{2};
    QString classGrade;
    QString classRoom;
    QString sex;
};

#endif // STUDENTENTRY_H
