#include<iostream>
using namespace std;

int main()
{
    int a,n;
    cout<<"Enter any number : ";
    cin>>a;
    cout<<"How many multiples do you want : ";
    cin>>n;
    for(int i =1; i<=n ;i++)
    cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    return 0;
}