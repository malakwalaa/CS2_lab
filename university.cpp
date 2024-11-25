#include "university.h"
#include <fstream>
#include <sstream>
#include<iostream>

using namespace std;
// Load courses
void university::load_courses(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) return;

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string courseId, name, instructor, schedule;
        if (std::getline(iss, courseId, ',') && std::getline(iss, name, ',') &&
            std::getline(iss, instructor, ',') && std::getline(iss, schedule, ',')) {
            courses[courseId] = course(courseId, name, instructor, schedule);
        }
    }
}

// Save courses
void university::save_courses(const std::string& filename) const {
    std::ofstream file(filename);
    for (const auto& pair : courses) {
        file << pair.second.get_courseid() << "," << pair.second.get_name() << ","
             << pair.second.get_prof() << "," << pair.second.get_schedule() << "\n";
    }
}


void university::load_events(const std::string& filename) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filename << " for reading events.\n";
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string eventid, title, speaker, schedule;

        if (std::getline(iss, eventid, ',') &&
            std::getline(iss, title, ',') &&
            std::getline(iss, speaker, ',') &&
            std::getline(iss, schedule, ',')) {

            events[eventid] = event(eventid, title, speaker, schedule);
        }
    }

    file.close();
}
void university::save_events(const string& filename) const {
    ofstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filename << " for saving events.\n";
        return;
    }

    for (const auto& [eventid, event] : events) {
        file << event.get_event_id() << ","
             << event.get_title() << ","
             << event.get_speaker() << ","
             << event.get_schedule() << "\n";
    }

    file.close();
}
void university::load_students(const string& filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << " for reading students.\n";
        return;
    }

    string line;
    while (std::getline(file, line)) {
        istringstream iss(line);
        string username, password;

        if (std::getline(iss, username, ',') &&
            std::getline(iss, password, ',')) {

            students[username] = student(username, password);
        }
    }

    file.close();
}
void university::save_students(const string& filename) const {
    ofstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << " for saving students.\n";
        return;
    }

    for (auto it = students.begin(); it != students.end(); ++it) {
        file << it->second.get_username() << "," // Access student object via the second element of the pair
             << it->second.get_password() << "\n";
    }

    file.close();
}
// Default constructor
university::university() {}

// Getter for courses
map<string, course>& university::get_courses() {
    return courses;
}

// Getter for events
map<string, event>& university::getEvents() {
    return events;
}

// Getter for students
map<string, student>& university::getStudents() {
    return students;
}

