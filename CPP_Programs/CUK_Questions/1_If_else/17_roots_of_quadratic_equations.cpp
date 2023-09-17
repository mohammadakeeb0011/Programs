#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c,d,e,m,n,real,imag;
    cout<<"Enter the cofficient of x^2 : ";
    cin>>a;
    cout<<"\nEnter the cofficient of x : ";
    cin>>b;
    cout<<"\nEnter the constant term: ";
    cin>>c;
    e = b*b - (4*a*c);
    d = sqrt((b*b) - (4*a*c));
    if( e > 0)
    {
        cout<<"Root 1 = "<< (-b+d)/(2*a) <<"\nRoot 2 = "<< (-b-d)/(2*a)<<endl;
    }
    else if( e == 0)
    {
        cout<<"Root 1 = Root 2 = " <<-b/(2*a)<<endl;
    }
    else if( e < 0)
    {
        cout<<"Root 1 = \n";
        cout<<"Real part = "<< -b/(2*a) <<"\nImag part = "<< d/(2*a) <<endl;
        cout<<"Root 1 = \n";
        cout<<"Real part = "<< -b/(2*a) <<"\nImag part = "<< -d/(2*a) <<endl;
    }

    return 0;
}