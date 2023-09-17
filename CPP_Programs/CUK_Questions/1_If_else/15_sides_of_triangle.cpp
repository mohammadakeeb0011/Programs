#include<iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter side AB of triangle ABC: ";
    cin>>a;
    cout<<"\nEnter side BC of triangle ABC: ";
    cin>>b;
    cout<<"\nEnter side AC of triangle ABC: ";
    cin>>c;
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    cout<<"The given triangle can exist\n"<<endl;
    else
    cout<<"\nThe given triangle can not exist"<<endl;
    return 0;

}