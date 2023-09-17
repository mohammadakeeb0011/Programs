#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    if(a<b)
        cout<<"The greatest among the two is: "<<b<<endl;
    else
        cout<<"The greatest among the two is: "<<a<<endl;
    return 0;
}