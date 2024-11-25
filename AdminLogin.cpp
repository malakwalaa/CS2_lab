#include "AdminLogin.h"
#include "ui_AdminLogin.h"

AdminLogin::AdminLogin(QWidget *parent) :
    QDialog(parent), // Change QWidget to QDialog
    ui(new Ui::AdminLogin) {
    ui->setupUi(this);
    ui->passwordInput->setEchoMode(QLineEdit::Password);
}
void AdminLogin::on_loginButton_clicked() {
    QString email = ui->emailInput->text();
    QString password = ui->passwordInput->text();

    // Check admin credentials (logic can be expanded)
    if (email == "admin@example.com" && password == "password123") {
        ui->statusLabel->setText("Login Successful!");
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
}
