#ifndef EVENT_H
#define EVENT_H

#include <string>

using std::string;

class event
{
private:
    string eventid;
    string title;
    string speaker;
    string schedule;
public:
    event(const string& eventid, const string& title, const string& speaker, const string& schedule );

    string get_event_id()const;
    string get_title()const;
    string get_speaker()const;
    string get_schedule()const;

     event() : eventid(""), title(""), speaker(""), schedule("") {}
};



#endif // EVENT_H
