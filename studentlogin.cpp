//by mahmoud
#include "studentlogin.h"
#include "ui_studentlogin.h"

StudentLogin::StudentLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentLogin)
{
    ui->setupUi(this);
    ui->password->setEchoMode(QLineEdit::Password);
}

void StudentLogin::on_login_button_clicked(){ //will have to add code to check the credentials against the database.
    Qstring username = ui->lineEdit_username->text();
    Qstring password = ui->lineEdit_password->text();
    Qstring id = ui->lineEdit_id->text();
    // Check admin credentials (logic can be expanded)
    if (username == "admin@example.com" && password == "password123") {
        ui->status->setText("Login Successful!");
    } else {
        ui->status->setText("Invalid credentials!");
    }

void StudentLogin::on_Registerbutton_clicked() //will have to add code to create a new user on the spot
    {
        Qstring username = ui->lineEdit_username->text();
        Qstring password = ui->lineEdit_password->text();
        Qstring id = ui->lineEdit_id->text();
        // Check admin credentials (logic can be expanded)
        if (username == "admin@example.com" && password == "password123") {
            ui->status->setText("Registeration Successful!");
        } else {
            ui->status->setText("Invalid credentials!");
        }
    }

}
void StudentLogin::on_backButton_clicked()
{
    this->hide();
    parentWidget()->show();
}

StudentLogin::~StudentLogin()
{
    delete ui;
}

