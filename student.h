#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"
#include "course.h"
#include "event.h"
#include <vector>
#include<iostream>
#include <QListWidget>
#include <string>

using namespace std;
using std::string;
using std::vector;

class student: public user
{
public:
    vector<course>registered_courses;
    vector<event>registered_events;
     student(const std::string& username, const std::string& password);


    void add_course(const course& course);
    void drop_course(const string& courseid);
    void add_event(const event& event);

    void view_added_courses(QListWidget* listWidget)const;
    void view_added_events(QListWidget* listWidget)const;

    string get_username()const;
    string get_password()const;
    string get_email()const;

    student() : user("", ""), registered_courses(), registered_events() {}

private:
    string email;

    //void display_dashboard()const override;

};

#endif // STUDENT_H



