#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include "course.h"
#include "event.h"
#include <vector>

using std::string;
using std::vector;

class student: public user
{
private:
    vector<course>registered_courses;
    vector<event>registered_events;
public:
    student(const string& username, string& password);

    void add_course(const course& course);
    void drop_course(const string& courseid);
    void add_event(const event& event);

    void view_added_courses()const;
    void view_added_events()const;

    string get_username()const;
    string get_password()const;


    void display_dashboard()const override;

};

#endif // STUDENT_H
