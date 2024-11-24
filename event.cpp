#include "event.h"

event::event(const std::string& eventId, const std::string& title, const std::string& speaker, const std::string& schedule)
    : eventid(eventId), title(title), speaker(speaker), schedule(schedule) {}

// Getters
string event::get_event_id() const {
    return eventid;
}

string event::get_title() const {
    return title;
}

string event::get_speaker() const {
    return speaker;
}

string event::get_schedule() const {
    return schedule;
}
