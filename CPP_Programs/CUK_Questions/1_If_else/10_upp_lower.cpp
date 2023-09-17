#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter any character: "<<endl;
    cin>>a;

    if( (a<= 90 ) && (a>=65 ) )
        cout<<"The given character "<<a<<" is an upper case alphabet"<<endl;
    else if( (a<=122 ) && (a>=97 ))
        cout<<"The given character "<<a<<" is a lower case alphabet"<<endl;
    else
        cout<<"The given character "<<a<<" is not an alphabet"<<endl;

    return 0;
}