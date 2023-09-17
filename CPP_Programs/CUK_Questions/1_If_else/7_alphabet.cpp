#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter any character: "<<endl;
    cin>>a;

    if( (a<= 'Z' ) && (a>= 'A' ) || (a<='z' ) && (a>= 'a' ) )
        cout<<"The given character "<<a<<" is an alphabet"<<endl;
    else
        cout<<"The given character "<<a<<" is not an alphabet"<<endl;

    return 0;
}