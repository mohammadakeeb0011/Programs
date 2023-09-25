#include<iostream>
#include<cstring>
using namespace std;

class String{
    private:
        enum {sz=80};
        char str[sz];
    public:
        String()
        { str[0] = '\0';}

        String(char s[])                           // 1-arg constructor convert C-string to String
        {strcpy(str,s);}

        void display() const
        { cout<<str;}

        operator char*()                           // conversion operator  String To C-String
        { return str;}

};

int main()
{
    String s1;

    char name[]="Mohammad Akeeb";

    s1 = name;                                     // use 1-arg constructor to convert and initialize C-string

    s1.display();

    String s2 = "Adnan Niyaz";
    cout<<static_cast<char*>(s2)<<endl;            // use conversion operrator to convert String to C-string

    return 0;
}