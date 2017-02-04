#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>
#include <QLineEdit>
#include <QComboBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Student_system_widget *wp = new Student_system_widget;
    setCentralWidget(wp);


}

MainWindow::~MainWindow()
{
    delete ui;
}
Student_system_widget::Student_system_widget(QWidget *parent) :
    QWidget(parent)
{
    QLabel *nameLabel = new QLabel(tr("Name: "));
    nameLine = new QLineEdit;
    QLabel *ageLabel = new QLabel(tr("Age: "));
    ageLine = new QLineEdit;
    QLabel *birthLabel = new QLabel(tr("Birthday: "));
    year = new QComboBox;
    for (int i = 1990 ; i <=2100; i++)
        year->addItem(QString::number(i));
    month = new QComboBox;
    for (int i = 1; i <= 12; i++)
        month->addItem(QString::number(i));
    day = new QComboBox;
    for (int i = 1; i <= 31;i++)
        day->addItem(QString::number(i));
    birthLine = new QLineEdit;
    QLabel *sexLabel = new QLabel(tr("Sex: "));
    sexButtonM = new QRadioButton("Male", this);
    sexButtonF = new QRadioButton("Female", this);
    QLabel *classLabel = new QLabel(tr("Class"));
    grade = new QComboBox;
    grade->addItem("DP2");
    grade->addItem("DP1");
    grade->addItem("Pre-DP");
    grade->addItem("MYP3");
    grade->addItem("MYP2");
    grade->addItem("MYP1");
    room = new QComboBox;
    room->addItem("A");
    room->addItem("B");
    classLine = new QLineEdit;
    QLabel *subject_l = new QLabel(tr("Subject: "));
    subjectLine = new QLineEdit;
    QLabel *subjectChoice = new QLabel(tr("Subject Choice"));
    QLabel *subjectLevel = new QLabel(tr("Subject level: "));
    QLabel *Chinese = new QLabel(tr("Chinese"));
    QLabel *Math = new QLabel(tr("Math"));
    QLabel *English = new QLabel(tr("English"));

    Level1 = new QComboBox;
    Level1->addItem("SL");
    Level1->addItem("HL");
    Level2 = new QComboBox;
    Level2->addItem("SL");
    Level2->addItem("HL");
    Level3 = new QComboBox;
    Level3->addItem("SL");
    Level3->addItem("HL");
    Level4 = new QComboBox;
    Level4->addItem("SL");
    Level4->addItem("HL");
    Level5 = new QComboBox;
    Level5->addItem("SL");
    Level5->addItem("HL");
    Level6 = new QComboBox;
    Level6->addItem("SL");
    Level6->addItem("HL");
    Csubject1 = new QComboBox;
    Csubject1->addItem("Biology");
    Csubject1->addItem("Chemistry");
    Csubject1->addItem("Physics");
    Csubject1->addItem("Economics");
    Csubject1->addItem("Business and Management");
    Csubject1->addItem("Art");
    Csubject2 = new QComboBox;
    Csubject2->addItem("Biology");
    Csubject2->addItem("Chemistry");
    Csubject2->addItem("Physics");
    Csubject2->addItem("Economics");
    Csubject2->addItem("Business and Management");
    Csubject2->addItem("Art");
    Csubject3 = new QComboBox;
    Csubject3->addItem("Biology");
    Csubject3->addItem("Chemistry");
    Csubject3->addItem("Physics");
    Csubject3->addItem("Economics");
    Csubject3->addItem("Business and Management");
    Csubject3->addItem("Art");




    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(nameLabel,0,0);
    mainLayout->addWidget(nameLine, 0,1);
    mainLayout->addWidget(ageLabel, 1,0);
    mainLayout->addWidget(ageLine,1,1);
    mainLayout->addWidget(birthLabel,2,0);
    mainLayout->addWidget(year, 2, 1);
    mainLayout->addWidget(month, 2, 2);
    mainLayout->addWidget(day, 2, 3);
    mainLayout->addWidget(sexLabel, 3,0);
    mainLayout->addWidget(sexButtonM, 3,1);
    mainLayout->addWidget(sexButtonF,3,2);
    mainLayout->addWidget(classLabel, 4,0);
    mainLayout->addWidget(grade, 4,1);
    mainLayout->addWidget(room, 4,2);
    mainLayout->addWidget(subject_l, 5,0);
    mainLayout->addWidget(subjectChoice,5,1);
    mainLayout->addWidget(subjectLevel, 5,2);
    mainLayout->addWidget(Chinese, 6,1);
    mainLayout->addWidget(Math, 7,1);
    mainLayout->addWidget(English, 8,1);
    mainLayout->addWidget(Csubject1,9,1);
    mainLayout->addWidget(Csubject2, 10,1);
    mainLayout->addWidget(Csubject3, 11,1);
    mainLayout->addWidget(Level1,6,2);
    mainLayout->addWidget(Level2,7,2);
    mainLayout->addWidget(Level3,8,2);
    mainLayout->addWidget(Level4,9,2);
    mainLayout->addWidget(Level5,10,2);
    mainLayout->addWidget(Level6,11,2);

    setLayout(mainLayout);
    setWindowTitle(tr("Student Managment System"));
}
