#include<iostream>
using namespace std;

int main()
{
    unsigned int n;
    unsigned long int fact =1;

    cout<<"Enter any number : ";
    cin>>n;
    int i;
    for(i=1 ; i<=n ; i++ )
    {
        fact *= i;  
    }
    cout<<"Factorial of given number : "<<fact<<endl;

    return 0;
}