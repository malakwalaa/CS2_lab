// #ifndef NEWUSERREGISTRATION_H
// #define NEWUSERREGISTRATION_H

// #include <QDialog>

// namespace Ui {
// class NewUserRegistration;
// }

// class NewUserRegistration : public QDialog
// {
//     Q_OBJECT

// public:
//     explicit NewUserRegistration(QWidget *parent = nullptr);
//     ~NewUserRegistration();

// private slots:
//     void on_RegisterButton_clicked();

//     void on_BackButton_clicked();

// private:
//     Ui::NewUserRegistration *ui;
// };

// #endif // NEWUSERREGISTRATION_H
// #ifndef NEWUSERREGISTRATION_H
// #define NEWUSERREGISTRATION_H

// #include <QWidget>

// namespace Ui {
// class NewUserRegistration;
// }

// class NewUserRegistration : public QWidget
// {
//     Q_OBJECT

// public:
//     explicit NewUserRegistration(QWidget *loginPage, QWidget *parent = nullptr);
//     ~NewUserRegistration();

// private slots:
//     void on_BackButton_clicked(); // Slot for the Back button

// private:
//     Ui::NewUserRegistration *ui; // Pointer to the UI
//     QWidget *loginPage;          // Pointer to the login page
// };

// #endif // NEWUSERREGISTRATION_H

#ifndef NEWUSERREGISTRATION_H
#define NEWUSERREGISTRATION_H

#include <QDialog>

namespace Ui {
class NewUserRegistration;
}

class NewUserRegistration : public QDialog
{
    Q_OBJECT

public:
    explicit NewUserRegistration(QWidget *loginPage, QWidget *parent = nullptr);
    ~NewUserRegistration();

private slots:
    void on_BackButton_clicked();

    void on_RegisterButton_clicked();

private:
    Ui::NewUserRegistration *ui; // Pointer to the UI
    QWidget *loginPage;          // Pointer to the login page
};

#endif // NEWUSERREGISTRATION_H
