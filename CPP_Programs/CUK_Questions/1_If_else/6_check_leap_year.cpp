#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the year : "<<endl;
    cin>>a;

    if(  ( ( a%4 == 0)  && (a%100 != 0) ) ||  ( a % 400 == 0) )
        cout<<"The given year "<<a<<" is a leap year."<<endl;
    else
        cout<<"The given year "<<a<<" is not a leap year."<<endl;
    
    return 0;
}