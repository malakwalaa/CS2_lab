// #ifndef STUDENTDASHBOARD_H
// #define STUDENTDASHBOARD_H

// #include <QDialog>

// namespace Ui {
// class studentdashboard;
// }

// class studentdashboard : public QDialog
// {
//     Q_OBJECT

// public:
//     explicit studentdashboard(QWidget *parent = nullptr);
//     ~studentdashboard();

// private slots:
//     void on_eventRegistrationButton_clicked();

//     void on_courseRegistrationButton_clicked();

//     void on_academicProfileButton_clicked();

// private:
//     Ui::studentdashboard *ui;
// };

// #endif // STUDENTDASHBOARD_H

// #ifndef STUDENTDASHBOARD_H
// #define STUDENTDASHBOARD_H

// #include <QDialog>
// #include "student.h"  // Include the student header to access the student class

// namespace Ui {
// class studentdashboard;
// }

// class studentdashboard : public QDialog
// {
//     Q_OBJECT

// public:
//     explicit studentdashboard(student* currentStudent, QWidget *parent = nullptr);  // Constructor now accepts currentStudent
//     ~studentdashboard();

// private slots:
//     void on_eventRegistrationButton_clicked();

//     void on_courseRegistrationButton_clicked();

//     void on_academicProfileButton_clicked();

// private:
//     Ui::studentdashboard *ui;
//     student* currentStudent;  // Member variable to hold currentStudent
// };

// #endif // STUDENTDASHBOARD_H

// #ifndef STUDENTDASHBOARD_H
// #define STUDENTDASHBOARD_H

// #include <QDialog>
// #include "student.h"

// namespace Ui {
// class studentdashboard;
// }

// class studentdashboard : public QDialog
// {
//     Q_OBJECT

// public:
//     explicit studentdashboard(student *currentStudent, QWidget *parent = nullptr);
//     ~studentdashboard();

// private slots:
//     void on_courseRegistrationButton_clicked();
//     void on_academicProfileButton_clicked();
//     void on_eventRegistrationButton_clicked();

// private:
//     Ui::studentdashboard *ui;
//     student *currentStudent; // Pointer to the currently logged-in student
// };

// #endif // STUDENTDASHBOARD_H

#ifndef STUDENTDASHBOARD_H
#define STUDENTDASHBOARD_H

#include <QDialog>
#include "student.h"

namespace Ui {
class studentdashboard;
}

class studentdashboard : public QDialog
{
    Q_OBJECT

public:
    // Constructor accepts a pointer to the current student
    explicit studentdashboard(student *currentStudent, QWidget *parent = nullptr);

    ~studentdashboard();

private slots:
    // Slot for course registration button click
    void on_courseRegistrationButton_clicked();

    // Slot for academic profile button click
    void on_academicProfileButton_clicked();

    // Slot for event registration button click
    void on_eventRegistrationButton_clicked();

private:
    Ui::studentdashboard *ui;     // Pointer to the UI
    student *currentStudent;      // Pointer to the currently logged-in student
};

#endif // STUDENTDASHBOARD_H
