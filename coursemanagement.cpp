#include "coursemanagement.h"
#include "ui_coursemanagement.h"

coursemanagement::coursemanagement(university *uni, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::coursemanagement), uni(uni)
{
    ui->setupUi(this);
    refreshCourseList();
}



coursemanagement::~coursemanagement()
{
    delete ui;
}

void coursemanagement::refreshCourseList() {
    ui->courseList->clear();
    for (const auto &[id, course] : uni->get_courses()) {
        ui->courseList->addItem(QString::fromStdString(course.get_name() + " (" + course.get_courseid() + ")"));
    }
}

void coursemanagement::on_addCourseButton_clicked() {
    QString id = ui->courseIdInput->text();
    QString name = ui->courseNameInput->text();
    QString instructor = ui->courseInstructorInput->text();
    QString schedule = ui->courseScheduleInput->text();

    course newCourse(id.toStdString(), name.toStdString(), instructor.toStdString(), schedule.toStdString());
    uni->get_courses().emplace(newCourse.get_courseid(), newCourse);

    refreshCourseList();
}

void coursemanagement::on_editCourseButton_clicked() {
    QString id = ui->courseIdInput->text();
    if (uni->get_courses().find(id.toStdString()) != uni->get_courses().end()) {
        course &c = uni->get_courses().at(id.toStdString());
        c = course(id.toStdString(), ui->courseNameInput->text().toStdString(),
                   ui->courseInstructorInput->text().toStdString(),
                   ui->courseScheduleInput->text().toStdString());
    }
    refreshCourseList();
}

void coursemanagement::on_deleteCourseButton_clicked() {
    QString id = ui->courseIdInput->text();
    uni->get_courses().erase(id.toStdString());
    refreshCourseList();
}
