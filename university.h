#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <vector>
#include <map>
#include <string>
#include "student.h"
#include "course.h"
#include "event.h"

using std::string;
using std::vector;
using std::map;

class university
{
private:
    map<string, student*> students;
    map<string, event>events;
    map<string,course>courses;
public:
    university();

    void load_courses(const string& filename);
    void save_courses(const string& filename) const;

    void load_events(const string& filename);
    void save_events(const string& filename) const;

    void load_students(const string& filename);
    void save_students(const string& filename) const;

    student* getStudentById(const std::string& studentId);
    void addStudent(const std::string& id, student* newStudent);


    map<string, course>& get_courses();
    map<std::string, event>& getEvents();
    map<std::string, student*>& getStudents();


    // void addstudent(const student& student);
    // student* find_student_by_id(const string& id);
    // void addadmin (const admin& admin);
    // void addcourse(const course& course);
    // course* find_course_by_id(const string& id);
    // void addevent(const event& event);

    // void display_all_students() const;
    // void display_all_courses() const;
    // void display_all_events() const;
};

#endif // UNIVERSITY_H

