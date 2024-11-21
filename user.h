#ifndef USER_H
#define USER_H
#include <string>
using std::string;
using std::vector;

class user
{
protected:
    string name;
    string id;
    string email;

public:
    user(const string& username, const string& password );
    virtual ~user()=default;

    string getusername()const;
    bool confirm (const string& inputpassword) const;

    virtual void display_dashboard()const =0;
};

#endif // USER_H
