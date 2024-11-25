#include "mainwindow.h"
#include "university.h"
#include <iostream>

#include <QApplication>

university universityInstance;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Initialize and load data
    universityInstance.load_students("students.csv");
    universityInstance.load_courses("courses.csv");
    universityInstance.load_events("events.csv");

    for (const auto& [username, student] : universityInstance.getStudents()) {
        std::cout << "Loaded student: " << username << "\n";
    }

    for (const auto& [courseId, course] : universityInstance.get_courses()) {
        std::cout << "Loaded course: " << course.get_name() << "\n";
    }


    MainWindow w;
    w.show();
    return a.exec();
}
