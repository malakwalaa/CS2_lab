// #include "studentdashboard.h"
// #include "ui_studentdashboard.h"
// #include <QListWidget>
// #include <QListWidgetItem>
// #include <university.h>
// extern university universityInstance;

// studentdashboard::studentdashboard(QWidget *parent)
//     : QDialog(parent)
//     , ui(new Ui::studentdashboard)
// {
//     ui->setupUi(this);
// }



// void studentdashboard::on_courseRegistrationButton_clicked() {
//     QListWidget *listWidget = new QListWidget(this);
//     // Display available courses
//     for (const auto& [courseId, course] : universityInstance.get_courses()) {
//         listWidget->addItem(QString::fromStdString(course.get_name() + " (" + course.get_courseid() + ")"));
//     }

//     connect(listWidget, &QListWidget::itemClicked, [=](QListWidgetItem *item) {
//         QString selectedCourse = item->text();
//         // Implement prerequisite checks and registration logic
//     });
// }

// void studentdashboard::on_academicProfileButton_clicked() {
//     QListWidget *listWidget = new QListWidget(this);

//     // Display registered courses
//     for (const auto& course : currentStudent.registered_courses) {
//         QString courseInfo = QString::fromStdString(course.get_name() + " (" + course.get_courseid() + ")");
//         listWidget->addItem(courseInfo);
//     }
// }

// void studentdashboard::on_eventRegistrationButton_clicked() {
//     QListWidget *listWidget = new QListWidget(this);

//     // Display available events
//     for (const auto& [eventId, event] : universityInstance.getEvents()) {
//         listWidget->addItem(QString::fromStdString(event.get_title() + " by " + event.get_speaker()));
//     }

//     connect(listWidget, &QListWidget::itemClicked, [=](QListWidgetItem *item) {
//         QString selectedEvent = item->text();
//         // Implement registration logic
//     });
// }


// studentdashboard::~studentdashboard()
// {
//     delete ui;
// }
#include "studentdashboard.h"
#include "ui_studentdashboard.h"
#include <QListWidget>
#include <QListWidgetItem>
#include <university.h>
extern university universityInstance;

studentdashboard::studentdashboard(student* currentStudent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::studentdashboard)
    , currentStudent(currentStudent)  // Initialize currentStudent via constructor
{
    ui->setupUi(this);
}

void studentdashboard::on_courseRegistrationButton_clicked() {
    QListWidget *listWidget = new QListWidget(this);
    // Display available courses
    for (const auto& [courseId, course] : universityInstance.get_courses()) {
        listWidget->addItem(QString::fromStdString(course.get_name() + " (" + course.get_courseid() + ")"));
    }

    connect(listWidget, &QListWidget::itemClicked, [=](QListWidgetItem *item) {
        QString selectedCourse = item->text();
        // Implement prerequisite checks and registration logic
    });
}

void studentdashboard::on_academicProfileButton_clicked() {
    QListWidget *listWidget = new QListWidget(this);

    // Display registered courses for the current student
    if (currentStudent) {
        for (const auto& course : currentStudent->registered_courses) {
            QString courseInfo = QString::fromStdString(course.get_name() + " (" + course.get_courseid() + ")");
            listWidget->addItem(courseInfo);
        }
    } else {
        qDebug() << "Error: currentStudent is not set!";
    }
}

void studentdashboard::on_eventRegistrationButton_clicked() {
    QListWidget *listWidget = new QListWidget(this);

    // Display available events
    for (const auto& [eventId, event] : universityInstance.getEvents()) {
        listWidget->addItem(QString::fromStdString(event.get_title() + " by " + event.get_speaker()));
    }

    connect(listWidget, &QListWidget::itemClicked, [=](QListWidgetItem *item) {
        QString selectedEvent = item->text();
        // Implement registration logic
    });
}

studentdashboard::~studentdashboard()
{
    delete ui;
}

