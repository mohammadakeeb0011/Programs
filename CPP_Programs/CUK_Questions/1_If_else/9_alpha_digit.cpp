#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter any character: "<<endl;
    cin>>a;

    if( (a<= 'Z' ) && (a>= 'A' ) || (a<= 'z' ) && (a>= 'a' ) )
        cout<<"The given character "<<a<<" is an alphabet"<<endl;
    else if( (a<= '/' ) && (a>= '!' ) || (a<= '@' ) && (a>= ':'  ) ||  (a<= '`' ) && (a>= '[' ) || (a<= '~' ) && (a>= '{' ))
        cout<<"The given character "<<a<<" is a special character"<<endl;
    else if( (a<= 9 ) && (a>= 0 ))
        cout<<"The given character "<<a<<" is a digit"<<endl;
    else 
        cout<<"You have not entered any printable character!"<<endl;

    return 0;
}