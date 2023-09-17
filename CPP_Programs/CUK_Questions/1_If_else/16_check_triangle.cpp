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
    {
        if((a==b) && (b == c))
    cout<<"The given triangle is equilateral triangle"<<endl;
    else if((a==b) || (b==c) || (a==c))
    cout<<"The given triangle is isoseles triangle"<<endl;
    else
    cout<<"The given triangle is isosceles triangle"<<endl;
    }
    
    return 0;

}