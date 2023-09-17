#include<iostream>
using namespace std;

int main()
{
    int n,q,r,pro=1;
    cout<<"Enter any number : ";
    cin>>n;
    q=n;
    while(q>0)
    {
        r = q%10;
        pro = pro*r;
        q /= 10;
    }
    cout<<"The product of digts of a given number is : "<<pro<<endl;
    return 0;
}