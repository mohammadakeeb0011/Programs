#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter any number: "<<endl;
    cin>>a;

    if( a%5 == 0)
        if( a%11 == 0)
        cout<<"The given number "<<a<<" is divisible by 5 and 11"<<endl;
        else
        cout<<"The given number "<<a<<" is not divisible by 5 and 11"<<endl;
    else
        cout<<"The given number "<<a<<" is not divisible by 5 and 11"<<endl;
    return 0;
}