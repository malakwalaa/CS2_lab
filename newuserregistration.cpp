// #include "newuserregistration.h"
// #include "ui_newuserregistration.h"

// NewUserRegistration::NewUserRegistration(QWidget *parent)
//     : QDialog(parent)
//     , ui(new Ui::NewUserRegistration)
// {
//     ui->setupUi(this);
// }



// NewUserRegistration::~NewUserRegistration()
// {
//     delete ui;
// }

// void NewUserRegistration::on_RegisterButton_clicked()
// {
//     QString username = ui->lineEdit_username->text();
//     QString password = ui->lineEdit_password->text();
//     QString id = ui->lineEdit_ID->text();
//     // Check admin credentials (logic can be expanded)
//     if (username == "admin@example.com" && password == "password123") {
//         ui->status->setText("Registeration Successful!");
//     } else {
//         ui->status->setText("Invalid credentials!");
//     }
// }


// void NewUserRegistration::on_BackButton_clicked()
// {
//     this->hide();
//     parentWidget()->show();
// }


// #include "newuserregistration.h"

// NewUserRegistration::NewUserRegistration(QWidget *loginPage, QWidget *parent)
//     : QWidget(parent), loginPage(loginPage) // Initialize the login page pointer
// {
// }

// NewUserRegistration::~NewUserRegistration()
// {
//     // Destructor (if needed for cleanup)
// }

// void NewUserRegistration::on_BackButton_clicked()
// {
//     this->hide(); // Hide the current window
//     if (loginPage) {
//         loginPage->show(); // Show the login page if it exists
//     }
// }

#include "newuserregistration.h"
#include "ui_newuserregistration.h"

NewUserRegistration::NewUserRegistration(QWidget *loginPage, QWidget *parent)
    : QDialog(parent), ui(new Ui::NewUserRegistration), loginPage(loginPage)
{
    ui->setupUi(this); // Set up the UI for this dialog
}

NewUserRegistration::~NewUserRegistration()
{
    delete ui; // Clean up the UI
}

void NewUserRegistration::on_BackButton_clicked()
{
    this->hide(); // Hide the dialog
    if (loginPage) {
        loginPage->show(); // Show the login page if it exists
    }
}

void NewUserRegistration::on_RegisterButton_clicked()
{
    QString email = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if (email == "admin@example.com" && password == "password123") {
        ui->status->setText("Login Successful!");
    } else {
        ui->status->setText("Invalid credentials!");
    }
}


