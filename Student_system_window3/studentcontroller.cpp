#include "studentcontroller.h"

studentController::studentController(student *student, QObject *parent) : QObject(parent),
    m_student (student)
{
    Q_ASSERT( student != nullptr);
}

studentEntry *studentController::createEntry()
{
    auto result = m_student->createEntry();
    if ( result != nullptr) {
        result->setName(tr("New Student"));
    }
    return result;
}

bool studentController::deleteEntry(studentEntry *entry)
{
    return m_student->deleteEntry(entry);
}
