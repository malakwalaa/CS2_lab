#include "student.h"



student::student(const std::string& username, const std::string& password)
    : user(username, password) {}



// Register for a course
void student::add_course(const course& course) {
    registered_courses.push_back(course);
}

// Unregister from a course
void student::drop_course(const std::string& courseId) {
    registered_courses.erase(
        remove_if(registered_courses.begin(), registered_courses.end(),
                  [&courseId](const course& course) { return course.get_courseid() == courseId; }),
        registered_courses.end()
        );
}

// Register for an event
void student::add_event(const event& event) {
    registered_events.push_back(event);
}


void student::view_added_courses(QListWidget* listWidget) const {
    // Clear the list widget first
    listWidget->clear();

    // Add registered courses to the list widget
    for (const auto& course : registered_courses) {
        QString courseInfo = QString::fromStdString(course.get_name()) +
                             " (" + QString::fromStdString(course.get_courseid() + ")");
        listWidget->addItem(courseInfo);
    }
}

void student::view_added_events(QListWidget* listWidget) const {
    // Clear the list widget first
    listWidget->clear();

    // Add registered events to the list widget
    for (const auto& event : registered_events) {
        QString eventInfo = QString::fromStdString(event.get_title()) +
                            " by " + QString::fromStdString(event.get_speaker());
        listWidget->addItem(eventInfo);
    }
}

// // Display dashboard
// void Student::displayDashboard() const {
//     std::cout << "Student Dashboard for " << get_username() << "\n";
//     std::cout << "Registered Courses:\n";
//     viewRegisteredCourses();
//     std::cout << "Registered Events:\n";
//     viewRegisteredEvents();
// }


// Getter for username
std::string student::get_username() const {
    return username;
}

// Getter for password
std::string student::get_password() const {
    return password;
}
string student::get_email() const {
    return email; // Assuming the email field exists in the student class
}
