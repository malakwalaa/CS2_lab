
#include "studentlogin.h"
#include "ui_studentlogin.h"
#include "newuserregistration.h"
#include "studentdashboard.h"
#include "student.h"
#include "university.h"



// StudentLogin::StudentLogin(QWidget *parent) :
//     QDialog(parent),
//     ui(new Ui::StudentLogin)
// {
//     ui->setupUi(this);
//     //ui->lineEdit_password->setEchoMode(QLineEdit::Password);
// }
// StudentLogin::~StudentLogin()
// {
//     delete ui;
// }


// void StudentLogin::on_Login_button_clicked(){ //will have to add code to check the credentials against the database.
//     QString username = ui->lineEdit_username->text();
//     QString password = ui->lineEdit_password->text();
//     QString id = ui->lineEdit_id->text();
//     // Check admin credentials (logic can be expanded)
//     if (username == "admin@example.com" && password == "password123") {
//         ui->status->setText("Login Successful!");
//     } else {
//         ui->status->setText("Invalid credentials!");
//     }

// }

// void StudentLogin::on_Registerbutton_clicked() //will have to add code to create a new user on the spot
//     {
//     NewUserRegistration *newUserWindow = new NewUserRegistration(this);
//     newUserWindow->show(); // Show the NewUserRegistration window
//     this->hide(); // Optionally hide the StudentLogin window

//     }


// void StudentLogin::on_backButton_clicked()
// {
//     this->hide();
//     parentWidget()->show();
// }


// Simulating a global university instance (replace this with actual logic)
extern university universityInstance;

StudentLogin::StudentLogin(QWidget *parent)
    : QDialog(parent), ui(new Ui::StudentLogin), dashboard(nullptr)
{
    ui->setupUi(this);
}

StudentLogin::~StudentLogin()
{
    delete ui;
    if (dashboard) {
        delete dashboard; // Cleanup the dashboard if it exists
    }
}

void StudentLogin::on_Login_button_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString id = ui->lineEdit_id->text();

    // Simulate credential validation (replace with actual database or logic)
    student *currentStudent = universityInstance.getStudentById(id.toStdString());
    if (username == "admin@example.com" && password == "password123") {
        ui->status->setText("Login Successful!");
        // Transition to student dashboard
        dashboard = new studentdashboard(currentStudent, this); // Pass current student
        dashboard->show();
        this->hide(); // Hide the login window
    } else {
        ui->status->setText("Invalid credentials!");
    }
}

void StudentLogin::on_Registerbutton_clicked()
{
    NewUserRegistration *newUserWindow = new NewUserRegistration(this);
    newUserWindow->show();
    this->hide();
}

void StudentLogin::on_backButton_clicked()
{
    this->hide();
    parentWidget()->show();
}
