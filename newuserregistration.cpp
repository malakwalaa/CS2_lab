#include "newuserregistration.h"
#include "ui_newuserregistration.h"

NewUserRegistration::NewUserRegistration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NewUserRegistration)
{
    ui->setupUi(this);
}



NewUserRegistration::~NewUserRegistration()
{
    delete ui;
}

void NewUserRegistration::on_RegisterButton_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString id = ui->lineEdit_ID->text();
    // Check admin credentials (logic can be expanded)
    if (username == "admin@example.com" && password == "password123") {
        ui->status->setText("Registeration Successful!");
    } else {
        ui->status->setText("Invalid credentials!");
    }
}

