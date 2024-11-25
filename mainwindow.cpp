// #include "mainwindow.h"
// #include "ui_mainwindow.h"
// #include "studentlogin.h"


// MainWindow::MainWindow(QWidget *parent)
//     : QMainWindow(parent)
//     , ui(new Ui::MainWindow),  studentLogin(nullptr)
// {
//     ui->setupUi(this);

//     connect(ui->student_push_button, &QPushButton::clicked, this, &MainWindow::on_student_push_button_clicked);
// }



// MainWindow::~MainWindow()
// {
//     delete ui;
//     if (studentLogin) {
//         delete studentLogin;
// }


// void on_student_push_button_clicked(){
//     // Check if the StudentLogin dialog is already created
//     if (!studentLogin) {
//         studentLogin = new StudentLogin(this); // Create the dialog and set 'this' as its parent
//     }

//     studentLogin->show(); // Show the dialog
//     studentLogin->raise(); // Bring it to the front if already visible
//     studentLogin->activateWindow(); // Ensure it gets focus
//     this->hide(); // Optionally hide the main window
// }
// }

// // void MainWindow::on_student_push_button_clicked()
// // {
// //    if (!studentLogin) {
// //         studentLogin = new StudentLogin(this); // Create the dialog and set 'this' as its parent
// //     }

// //     studentLogin->show(); // Show the dialog
// //     studentLogin->raise(); // Bring it to the front if already visible
// //     studentLogin->activateWindow(); // Ensure it gets focus
// //     this->hide(); // Optionally hide the main window

// // }


// // }
// // if (!studentLogin) { // Create the StudentLogin dialog if not already created
// //     studentLogin = new StudentLogin(this);
// // }
// // this->hide();         // Hide the MainWindow
// // studentLogin->exec(); // Show the dialog modally
// // this->show();         // Show MainWindow after dialog closes

// // Check if the StudentLogin dialog is already created

// #include "mainwindow.h"
// #include "ui_mainwindow.h"
// #include "studentlogin.h"

// MainWindow::MainWindow(QWidget *parent)
//     : QMainWindow(parent)
//     , ui(new Ui::MainWindow)
//     , studentLogin(nullptr) // Initialize studentLogin to nullptr
// {
//     ui->setupUi(this);

//     // Connect the push button to the slot
//     connect(ui->student_push_button, &QPushButton::clicked, this, &MainWindow::on_student_push_button_clicked);
// }

// MainWindow::~MainWindow()
// {
//     delete ui;
//     if (studentLogin) {
//         delete studentLogin; // Clean up studentLogin if it was created
//     }
// }

// void MainWindow::on_student_push_button_clicked()
// {
//     // Check if the StudentLogin dialog is already created
//     if (!studentLogin) {
//         studentLogin = new StudentLogin(this); // Create the dialog and set 'this' as its parent
//     }

//     studentLogin->show();         // Show the dialog
//     studentLogin->raise();        // Bring it to the front if already visible
//     studentLogin->activateWindow(); // Ensure it gets focus
//     this->hide();                 // Optionally hide the main window
// }
// #include "newuserregistration.h"

// // Inside MainWindow (or LoginPage) slot
// void MainWindow::on_registerButton_clicked()
// {
//     NewUserRegistration *registration = new NewUserRegistration(this); // Pass 'this' as the login page
//     registration->show(); // Show the registration window
//     this->hide(); // Optionally hide the login page
// }

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "studentlogin.h"
#include<newuserregistration.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), studentLogin(nullptr)
{
    ui->setupUi(this);

    // Connect UI buttons to their respective slots (optional if done in the .ui file)
}

MainWindow::~MainWindow()
{
    delete ui;
    if (studentLogin) {
        delete studentLogin;
    }
}

void MainWindow::on_student_push_button_clicked()
{
    // Navigate to the StudentLogin window
    if (!studentLogin) {
        studentLogin = new StudentLogin(this); // Pass 'this' as the parent
    }
    studentLogin->show();
    this->hide(); // Optionally hide the MainWindow
}

void MainWindow::on_registerButton_clicked()
{
    // Navigate to NewUserRegistration (if required directly from MainWindow)
    NewUserRegistration *registration = new NewUserRegistration(this);
    registration->show();
    this->hide();
}

void MainWindow::on_admin_push_button_clicked()
{
    if (!adminlogin) {
        adminlogin = new AdminLogin(this); // Pass 'this' as the parent
    }
    adminlogin->show();
    this->hide(); // Optionally hide the MainWindow
}

