#include<iostream>
using namespace std;

int main()
{
    int n,q,r,sum=0;
    cout<<"Enter any number : ";
    cin>>n;
    q=n;
    while(q>0)
    {
        r = q%10;
       sum =sum + r;
        q /= 10;
    }
    cout<<"The sum of digts of a given number is : "<<sum<<endl;
    return 0;
}