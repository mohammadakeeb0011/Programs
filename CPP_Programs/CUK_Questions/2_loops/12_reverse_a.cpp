#include<iostream>
using namespace std;

int main()
{
    int n,q,r,m=0,weight=10;
    cout<<"Enter any number : ";
    cin>>n;
    for(q=n; q>0 ; q /= 10)
    {
        r = q%10;
       m = m*weight + r;
    }
    cout<<"The reverse of a given number is : "<<m<<endl;
    return 0;
}