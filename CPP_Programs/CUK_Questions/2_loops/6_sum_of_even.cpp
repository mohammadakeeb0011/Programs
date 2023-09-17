#include<iostream>
using namespace std;

int main()
{
    unsigned int n = 0, m = 0;
    cout<<"Enter any number : ";
    cin>>n;

    for(int i = 1 ; i <= n ; i++)
    {
        if(i%2 == 0)
        m += i;
    }
    cout<<"Sum of even no.s is : "<<m<<endl;
    return 0;
}