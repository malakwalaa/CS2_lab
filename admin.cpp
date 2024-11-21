#include "admin.h"


admin::admin(const string& username, const string& password):user(username,password){}
void admin::add_course(university& university, const course& course){
    university.get_courses().emplace(course.get_courseid(), course);

}
void admin::delete_course(university& university, const string& courseid) {
    university.get_courses().erase(courseid);
}

// Add event
void admin::add_event(university& university, const event& new_event) {
    university.getEvents().emplace(new_event.get_event_id(), new_event);
}
// Delete event
void admin::delete_event(university& university, const string& eventid) {
    university.getEvents().erase(eventid);
}

// // Display admin dashboard
// void admin::display_dashboard() const {
//     std::cout << "Welcome, Admin: " << username << std::endl;
// }
