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

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "studentlogin.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , studentLogin(nullptr) // Initialize studentLogin to nullptr
{
    ui->setupUi(this);

    // Connect the push button to the slot
    connect(ui->student_push_button, &QPushButton::clicked, this, &MainWindow::on_student_push_button_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (studentLogin) {
        delete studentLogin; // Clean up studentLogin if it was created
    }
}

void MainWindow::on_student_push_button_clicked()
{
    // Check if the StudentLogin dialog is already created
    if (!studentLogin) {
        studentLogin = new StudentLogin(this); // Create the dialog and set 'this' as its parent
    }

    studentLogin->show();         // Show the dialog
    studentLogin->raise();        // Bring it to the front if already visible
    studentLogin->activateWindow(); // Ensure it gets focus
    this->hide();                 // Optionally hide the main window
}
