#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include <vector>
#include <string>
#include "course.h"
#include"event.h"
#include "university.h"

using std::string;
using std::vector;

class admin: public user
{
public:
    admin(const string& username,const string& password );

    void add_course(university& university, const course& course);
    void delete_course(university& university, const string& courseid );
    void add_event(university& university, const event& new_event);
    void delete_event(university& university, const string& eventid);


    //void display_dashboard()const override;
};

#endif // ADMIN_H
