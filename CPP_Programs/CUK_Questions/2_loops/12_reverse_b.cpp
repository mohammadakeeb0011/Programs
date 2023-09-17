#include<iostream>
using namespace std;

int main()
{
    int n,q,r,m=0,weight=10;
    cout<<"Enter any number : ";
    cin>>n;
    q=n;
    while(q>0)
    {
        r = q%10;
       m = m*weight + r;
        q /= 10;
    }
    cout<<"The reverse of a given number is : "<<m<<endl;
    return 0;
}