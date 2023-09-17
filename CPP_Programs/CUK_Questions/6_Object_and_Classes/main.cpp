#include<iostream>
using namespace std;

#include<string>

enum month {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

class Student
{
private:

    string first_name, middle_name, last_name;
    int roll_no;
    string gender;

    struct dob{
        short      d;
        enum month m;
        short      y;
    };

    string address;
    string   email;
    long  phone_no;
    string  course;

public:
    Student()
    {}
};

int main()
{
    Student s[2];
    return 0;
}