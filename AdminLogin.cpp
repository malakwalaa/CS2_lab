#include "AdminLogin.h"
#include "ui_AdminLogin.h"
#include "admin.h"

AdminLogin::AdminLogin(QWidget *parent) :
    QDialog(parent), // Change QWidget to QDialog
    ui(new Ui::AdminLogin) {
    ui->setupUi(this);
    ui->passwordInput->setEchoMode(QLineEdit::Password);
}
void AdminLogin::on_loginButton_clicked() {
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    // Check admin credentials (logic can be expanded)
    if (username == "admin" && password == "1234") {
        ui->statusLabel->setText("Login Successful!");
        dashboard = new admindashboard(); // Pass current student
        dashboard->show();
        this->hide();

    } else {
        ui->statusLabel->setText("Invalid credentials!");
    }
}

void AdminLogin::on_backButton_clicked() {
    this->hide();
    parentWidget()->show(); // Return to main window
}
AdminLogin::~AdminLogin() {
    delete ui;

}

