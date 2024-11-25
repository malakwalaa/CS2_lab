// #ifndef MAINWINDOW_H
// #define MAINWINDOW_H

// #include <QMainWindow>
// #include "studentlogin.h"

// QT_BEGIN_NAMESPACE
// namespace Ui {
// class MainWindow;
// }
// QT_END_NAMESPACE

// class MainWindow : public QMainWindow
// {
//     Q_OBJECT

// public:
//     MainWindow(QWidget *parent = nullptr);
//     ~MainWindow();



// private slots:
//     void on_student_push_button_clicked();

// private:
//     Ui::MainWindow *ui;
//     StudentLogin *studentLogin;

// };
// #endif // MAINWINDOW_H


// #ifndef MAINWINDOW_H
// #define MAINWINDOW_H

// #include <QMainWindow>
// #include "studentlogin.h"

// QT_BEGIN_NAMESPACE
// namespace Ui { class MainWindow; }
// QT_END_NAMESPACE

// class MainWindow : public QMainWindow
// {
//     Q_OBJECT

// public:
//     explicit MainWindow(QWidget *parent = nullptr);
//     ~MainWindow();

// private slots:
//     void on_student_push_button_clicked(); // Slot for handling button clicks
//     void on_registerButton_clicked();

// private:
//     Ui::MainWindow *ui;
//     StudentLogin *studentLogin; // Pointer to the StudentLogin dialog
// };

// #endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "studentlogin.h"
#include<AdminLogin.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_student_push_button_clicked(); // Slot for navigating to StudentLogin
    void on_registerButton_clicked();      // Slot for navigating to NewUserRegistration

    void on_admin_push_button_clicked();

private:
    Ui::MainWindow *ui;
    StudentLogin *studentLogin;
    // Pointer to StudentLogin
    AdminLogin *adminlogin;

};

#endif // MAINWINDOW_H
