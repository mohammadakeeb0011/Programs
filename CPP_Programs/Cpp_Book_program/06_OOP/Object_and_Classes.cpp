#include<iostream>
#include<string>

using namespace std;
class person{

    private:
    string f_name,m_name,l_name;
    unsigned long id;
    
    public: 
    void set_p()
    {
        cout<<"Enter Name: ";
        cin>>f_name>>m_name>>l_name;
        cout<<"Enter ID: ";
        cin>>id;
        }
    void display_p()
    {
        cout<<"Name: "<<f_name<<" "<<m_name<<" "<<l_name<<endl;
        cout<<"ID: "<<id<<endl;
    }
    };


int main()
{

        person umaid,akeeb;
        umaid.set_p();
        akeeb.set_p();
        akeeb.display_p();
        umaid.display_p();
    
    return 0;
    }