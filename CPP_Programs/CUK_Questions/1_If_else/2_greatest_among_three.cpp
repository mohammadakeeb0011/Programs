#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c)
            cout<<"The greatest among the three is: "<<a<<endl;
        else
            cout<<"The greatest among the three is: "<<c<<endl;
        }
    else if(b>c) 
        cout<<"The greatest among the three is: "<<b<<endl;
    else
        cout<<"The greatest among the three is: "<<c<<endl;
    return 0;
} 