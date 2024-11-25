#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_student_push_button_clicked()
{
    if (!studentLogin) { // Create the StudentLogin dialog if not already created
        studentLogin = new StudentLogin(this);
    }
    studentLogin->show();
    this->hide();
}

