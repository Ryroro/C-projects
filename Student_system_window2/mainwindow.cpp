#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"
#include <QGridLayout>
#include <QTreeWidget>
#include <QString>
#include <QPushButton>
#include <QStackedWidget>
#include "studentedit.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addStudent()
{
    studentEdit * editpage = new studentEdit;
    QStackedWidget *stackedWidget = new QStackedWidget;
    stackedWidget->setCurrentWidget(editpage);

}

void MainWindow::on_pushButton_clicked()
{
    addStudent();
}
