#include<iostream>
#include<string>
#include<vector>
using namespace std;

class person{
private:
    string fn,mn,ln;
    unsigned long id;
    struct{
        short day;
        short month;
        short year;
        }date;
public:
    void set_p()
    {
        cout<<"Enter name: ";
        cin>>fn>>mn>>ln;
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter date (d:m:y): ";
        cin>>date.day>>date.month>>date.year;
    }
    void display()
    {
        cout<<endl<<"Enter name: "<<fn<<" "<<mn<<" "<<ln<<endl;
        cout<<"Enter ID: "<<id<<endl;
        cout<<"Enter date (d:m:y): "<<date.day<<":"<<date.month<<":"<<date.year<<endl;
    }
    
};
class student: public person
{
    private:
    float fee;
    string course;
    public:
    void set_s()
    {
        set_p();
        cout<<"Enter Fee: ";
        cin>>fee;
        cout<<"Enter Course: ";
        cin>>course;
    }
    void display_s()
    {
        display();
        cout<<"Course Fee: "<<fee<<endl;
        cout<<"Course Name: "<<course<<endl;
    }
};

int main()
{         
    student s1,s2,s3;
    s1.set_s();
    s2.set_s();
    s3.set_s();
    s1.display_s();
    s2.display_s();
    s3.display_s();    
    return 0;
}