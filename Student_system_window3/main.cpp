#include "mainwindow.h"
#include <QApplication>
#include "student.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    student m_student;
    studentController controller(&m_student);
    MainWindow w(&controller);
    w.show();

    return a.exec();
}
