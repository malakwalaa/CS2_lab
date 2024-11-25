// //this works
// #include "admindashboard.h"
// #include "ui_admindashboard.h"
// #include "coursemanagement.h"
// admindashboard::admindashboard(QWidget *parent)
//     : QDialog(parent)
//     , ui(new Ui::admindashboard),
//  courseManagement(nullptr)
// {
//     ui->setupUi(this);
// }


// admindashboard::~admindashboard()
// {
//     delete ui;
//     if (courseManagement) {
//         delete courseManagement; // Clean up if created
//     }
// }


// void admindashboard::on_crsmgmtbutton_clicked()
// {
//     if (!courseManagement) {
//         courseManagement = new coursemanagement(this); // Create it with this as parent
//     }

//     courseManagement->show();      // Show the CourseManagement dialog
//     courseManagement->raise();     // Bring it to the front
//     courseManagement->activateWindow(); // Give it focus
// }

#include "admindashboard.h"
#include "ui_admindashboard.h"
#include "coursemanagement.h"
#include <QDebug> // For debugging

admindashboard::admindashboard(QWidget *parent)
    : QDialog(parent), ui(new Ui::admindashboard), courseManagement(nullptr)
{
    ui->setupUi(this);
}

admindashboard::~admindashboard()
{
    delete ui;
}

void admindashboard::on_crsmgmtbutton_clicked()
{
    if (!courseManagement) {
        qDebug() << "Creating CourseManagement dialog";
        courseManagement = std::make_unique<coursemanagement>(this);
    } else {
        qDebug() << "CourseManagement dialog already exists";
    }

    courseManagement->show();
    courseManagement->raise();
    courseManagement->activateWindow();

    ui->crsmgmtbutton->setEnabled(false); // Disable the button after opening the dialog
}
