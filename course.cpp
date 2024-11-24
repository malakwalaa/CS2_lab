#include "course.h"

// Constructor
course::course(const string& courseId, const string& name, const string& instructor, const string& schedule)
    : course_id(course_id), name(name), professor(professor), schedule(schedule) {}

// Getters
string course::get_courseid() const {
    return course_id;
}

string course::get_name() const {
    return name;
}

string course::get_prof() const {
    return professor;
}

string course::get_schedule() const {
    return schedule;
}
