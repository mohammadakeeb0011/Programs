#include<iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter the first angle of the triangle: "<<endl;
    cin>>a;
    cout<<"Enter the second angle of the triangle: "<<endl;
    cin>>b;
    cout<<"Enter the third angle of the triangle: "<<endl;
    cin>>c;
    if(a+b+c == 180.0 )
        cout<<"The given triangle is valid.";
    else
        cout<<"The given triangle is not valid.";
    return 0;
}