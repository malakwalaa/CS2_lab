#ifndef COURSE_H
#define COURSE_H
#include <string>

using std::string;


class course
{
private:
    string course_id;
    string name;
    string professor;
    string schedule;
public:
    course(const string& courseid, const string& name, const string& professor, const string& schedule);

    string get_courseid()const;
    string get_name()const;
    string get_prof()const;
    string get_schedule()const;
    course() : course_id(""), name(""), professor(""), schedule("") {}

};

#endif // COURSE_H
