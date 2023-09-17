#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;

    if(a < 0)
        cout<<"The given number "<<a<<" is negative"<<endl;
    else if(a > 0)
        cout<<"The given number "<<a<<" is positive"<<endl;
    else if(a == 0)
        cout<<"The given number "<<a<<" is zero"<<endl;
    else
        cout<<"You have not entered a valid number"<<endl;
    
    return 0;
}