#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter any number: "<<endl;
    cin>>a;

    if( a%2 == 0)
        cout<<"The given number "<<a<<" is even"<<endl;
    else
        cout<<"The given number "<<a<<" is odd"<<endl;

    return 0;
}