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


// #include "studentdashboard.h"
// #include "ui_studentdashboard.h"
// #include <QListWidget>
// #include <QListWidgetItem>
// #include <university.h>
// extern university universityInstance;

// studentdashboard::studentdashboard(student* currentStudent, QWidget *parent)
//     : QDialog(parent)
//     , ui(new Ui::studentdashboard)
//     , currentStudent(currentStudent)  // Initialize currentStudent via constructor
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

//     // Display registered courses for the current student
//     if (currentStudent) {
//         for (const auto& course : currentStudent->registered_courses) {
//             QString courseInfo = QString::fromStdString(course.get_name() + " (" + course.get_courseid() + ")");
//             listWidget->addItem(courseInfo);
//         }
//     } else {
//         qDebug() << "Error: currentStudent is not set!";
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
#include <QDebug>

extern university universityInstance;

studentdashboard::studentdashboard(student* currentStudent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::studentdashboard)
    , currentStudent(currentStudent)
{
    ui->setupUi(this);

    // Manually connect signals to slots if needed
    connect(ui->courseRegistrationButton, &QPushButton::clicked, this, &studentdashboard::on_courseRegistrationButton_clicked);
    connect(ui->academicProfileButton, &QPushButton::clicked, this, &studentdashboard::on_academicProfileButton_clicked);
    connect(ui->eventRegistrationButton, &QPushButton::clicked, this, &studentdashboard::on_eventRegistrationButton_clicked);
}

void studentdashboard::on_courseRegistrationButton_clicked() {
    qDebug() << "Course Registration Button Clicked";
    QListWidget *listWidget = new QListWidget(this);

    for (const auto& [courseId, course] : universityInstance.get_courses()) {
        listWidget->addItem(QString::fromStdString(course.get_name() + " (" + course.get_courseid() + ")"));
    }

    connect(listWidget, &QListWidget::itemClicked, [=](QListWidgetItem *item) {
        QString selectedCourse = item->text();
        qDebug() << "Selected Course:" << selectedCourse;
    });
}

void studentdashboard::on_academicProfileButton_clicked() {
    qDebug() << "Academic Profile Button Clicked";
    QListWidget *listWidget = new QListWidget(this);

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
    qDebug() << "Event Registration Button Clicked";
    QListWidget *listWidget = new QListWidget(this);

    for (const auto& [eventId, event] : universityInstance.getEvents()) {
        listWidget->addItem(QString::fromStdString(event.get_title() + " by " + event.get_speaker()));
    }

    connect(listWidget, &QListWidget::itemClicked, [=](QListWidgetItem *item) {
        QString selectedEvent = item->text();
        qDebug() << "Selected Event:" << selectedEvent;
    });
}

studentdashboard::~studentdashboard()
{
    delete ui;
}
