#ifndef USER_H
#define USER_H
#include <string>
#include<Qstring>
using std::string;
using std::vector;

class user {
protected:
    string  username;
    string password;

public:
    user(const string& username, const string& password);
    virtual ~user();

    string get_username() const;
    bool verify(const string& inputPassword) const;

    //virtual void displayDashboard() const = 0; // Pure virtual for polymorphism
};

#endif // USER_H
