#ifndef _STUDENT_H_
#define _STUDENT_H_
#define roll_no_len 12
#include<string>
using namespace std;

enum month {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};


class Student
{
private:

    string first_name, middle_name, last_name;
    char roll_no[roll_no_len];
    char gender[7];

    struct dob{
        short d;
        enum month m;
        short y;
    };

    string address;
    string email;
    long phone_no;
    string course;

public:
    Student();
};

Student::Student(/* args */)
{
}

Student::~Student()
{
}


 
#endif