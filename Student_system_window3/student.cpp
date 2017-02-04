#include "student.h"

student::student(QObject *parent) : QObject(parent)
{

}

student::Entries student::getEntries() const
{
    return entries;
}

studentEntry *student::createEntry()
{
    auto result = new studentEntry(this);
    if (result != nullptr) {
        entries.append(result);
        emit entryAdded(result);
    }
    return result;
}

bool student::deleteEntry(studentEntry *entry)
{
    if (entries.contains(entry)) {
        entries.removeOne(entry);
        delete entry;
        return true;
    }
    return false;

}


