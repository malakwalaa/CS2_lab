#include "user.h"

user::user(const string& username, const string& password) :username(username), password(password){}

string user::get_username() const{
    return username;
}
user::~user() {}
bool user::verify(const string& inputPassword) const {
    return password == inputPassword;
}
