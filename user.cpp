#include "user.h"

user::user(const string& name, const string& id, const string& email) : name(name),id(id),email(email){}

string user::getname() const{
    return name;
}
string user::getid()const{
    return id;
}
string user::getemail()const{
    return email;
}
