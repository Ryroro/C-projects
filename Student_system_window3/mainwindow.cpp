#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "studentcontroller.h"
#include <QPushButton>
MainWindow::MainWindow(studentController *controller,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_studentcontroller(controller)
{
    Q_ASSERT(controller != nullptr);
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->listpage);
    setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createEntry()
{
    auto entry = m_studentcontroller->createEntry();
    if (entry) {
        ui->listWidget->addItem(entry->getName());
        auto listItem = ui->listWidget->item(ui->listWidget->count()-1);
        m_entryMap.insert(listItem,entry);
        //connect(listItem, SIGNAL(doubleClicked(listItem)),this, SLOT(ui->stackedWidget->setCurrentWidget(ui->editpage)));
    }

}

void MainWindow::deleteEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if (listItem ) {
        auto entry = m_entryMap.value(listItem);
        if (entry) {
            if (m_studentcontroller->deleteEntry(entry)) {
                m_entryMap.remove(listItem);
                delete listItem;
            }
        }
    }
}

void MainWindow::editEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if (listItem ) {
        auto entry = m_entryMap.value(listItem);
        if (entry) {
            ui->stackedWidget->setCurrentWidget(ui->editpage);
            ui->menuEntries->setEnabled(false);
            resetEntry();
    }
    }
}

void MainWindow::saveEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if (listItem ) {
        auto entry = m_entryMap.value(listItem);
        if (entry) {
            entry->setName(ui->nameEdit->text());
            entry->setBirthday(ui->birthdayEdit->date());
            entry->setAge(ui->ageEdit->text().toInt());
            discardEntry();
        }

}
}

void MainWindow::discardEntry()
{
    ui->stackedWidget->setCurrentWidget(ui->listpage);
    ui->menuEntries->setEnabled(true);
}

void MainWindow::resetEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if (listItem ) {
        auto entry = m_entryMap.value(listItem);
        if (entry) {
            ui->nameEdit->setText(entry->getName());
            ui->ageEdit->setText(entry->getSex());
            ui->birthdayEdit->setDate(entry->getBirthday());
            ui->subjectLevel1ComboBox->addItem("SL");
            ui->subjectLevel1ComboBox->addItem("HL");
            ui->subjectLevel2ComboBox->addItem("SL");
            ui->subjectLevel2ComboBox->addItem("HL");
            ui->subjectLevel3ComboBox->addItem("SL");
            ui->subjectLevel3ComboBox->addItem("HL");
            ui->subjectLevel4ComboBox->addItem("SL");
            ui->subjectLevel4ComboBox->addItem("HL");
            ui->subjectLevel5ComboBox->addItem("SL");
            ui->subjectLevel5ComboBox->addItem("HL");
            ui->subjectLevel6ComboBox->addItem("SL");
            ui->subjectLevel6ComboBox->addItem("HL");
            ui->subjectChoice4ComboBox->addItem("Biology");
            ui->subjectChoice4ComboBox->addItem("Chemistry");
            ui->subjectChoice4ComboBox->addItem("Physics");
            ui->subjectChoice4ComboBox->addItem("Economics");
            ui->subjectChoice4ComboBox->addItem("Business and Management");
            ui->subjectChoice4ComboBox->addItem("Art");

            ui->subjectChoice5ComboBox->addItem("Biology");
            ui->subjectChoice5ComboBox->addItem("Chemistry");
            ui->subjectChoice5ComboBox->addItem("Physics");
            ui->subjectChoice5ComboBox->addItem("Economics");
            ui->subjectChoice5ComboBox->addItem("Business and Management");
            ui->subjectChoice5ComboBox->addItem("Art");

            ui->subjectChoice6ComboBox->addItem("Biology");
            ui->subjectChoice6ComboBox->addItem("Chemistry");
            ui->subjectChoice6ComboBox->addItem("Physics");
            ui->subjectChoice6ComboBox->addItem("Economics");
            ui->subjectChoice6ComboBox->addItem("Business and Management");
            ui->subjectChoice6ComboBox->addItem("Art");

            ui->classGradeComboBox->addItem("DP2");
            ui->classGradeComboBox->addItem("DP1");
            ui->classGradeComboBox->addItem("Pre-DP");
            ui->classGradeComboBox->addItem("MYP3");
            ui->classGradeComboBox->addItem("MYP2");
            ui->classGradeComboBox->addItem("MYP1");

            ui->classRoomComboBox->addItem("A");
            ui->classRoomComboBox->addItem("B");
    }
    }
}

void MainWindow::doubleClickedEditEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if (listItem ) {
        auto entry = m_entryMap.value(listItem);
        if (entry) {
            ui->stackedWidget->setCurrentWidget(ui->editpage);
            ui->menuEntries->setEnabled(false);
            resetEntry();
    }
}
}

void MainWindow::setupConnections()
{
    connect(ui->actionAdd, &QAction::triggered,this, &MainWindow::createEntry);
    connect(ui->actionRemove, &QAction::triggered,this, &MainWindow::deleteEntry);
    connect(ui->actionEdit, &QAction::triggered, this, &MainWindow::editEntry);
    connect(ui->buttonBox->button(QDialogButtonBox::Save),&QPushButton::clicked,this, &MainWindow::saveEntry);
    connect(ui->buttonBox->button(QDialogButtonBox::Discard), &QPushButton::clicked, this, &MainWindow::discardEntry);
    connect(ui->buttonBox->button(QDialogButtonBox::Reset), &QPushButton::clicked, this, &MainWindow::resetEntry);

}
